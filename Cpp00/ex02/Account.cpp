/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <tquemato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:02:04 by tquemato          #+#    #+#             */
/*   Updated: 2024/07/08 22:04:04 by tquemato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

#define RESET	"\033[0m"
#define BLUE	"\033[34m"

//using std::string;
using std::cout;
using std::endl;
using std::time;
using std::put_time;

//Initialize static variables
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//Display a timestamp
//Get current time and convert it to local time format
void Account::_displayTimestamp() {
	time_t now = time(nullptr);
	tm *timeStamp = localtime(&now);
	cout << "[" << put_time(timeStamp, "%Y%m%d_%H%M%S") << "] ";
}

//Constructor for the Account class
//Initialize the object's data members
Account::Account(int initial_deposit)
	: _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
		_totalAmount += initial_deposit;
		_displayTimestamp(); 
		cout << "index:" << BLUE << _accountIndex << RESET 
		<< ";amount:" << BLUE << _amount << RESET 
		<< ";created" << endl;
}

//Destructor for the Account class
Account::~Account() {
	_displayTimestamp();
	_nbAccounts--;
	_totalAmount -= _amount; //todo check if line needed
	cout << "index:" << BLUE << _accountIndex << RESET 
	<< ";amount:" << BLUE << _amount << RESET 
	<< ";closed" << endl;
}

//Getters
int Account::getNbAccounts() {
	return (_nbAccounts);
}

int Account::getTotalAmount() {
	return (_totalAmount);
}

int Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

//Display all accounts information
void Account::displayAccountsInfos() {
	_displayTimestamp();
	cout << "accounts:" << BLUE << getNbAccounts() << RESET 
	<< ";total:" << BLUE << getTotalAmount() << RESET 
	<< ";deposits:" << BLUE << getNbDeposits() << RESET 
	<< ";withdrawals:" << BLUE << getNbWithdrawals() << RESET << endl;
}

//Display an account's current information
void Account::displayStatus() const {
	_displayTimestamp();
	cout << "index:" << BLUE << _accountIndex << RESET 
	<< ";amount:" << BLUE << _amount << RESET 
	<< ";deposits:" << BLUE << _nbDeposits << RESET 
	<< ";withdrawals:" << BLUE << _nbWithdrawals << RESET << endl;
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	cout << "index:" << BLUE << _accountIndex << RESET 
	<< ";p_amount:" << BLUE << _amount << RESET 
	<< ";deposit:" << BLUE << deposit << RESET << ";";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	cout << "amount:" << BLUE << _amount << RESET 
	<< ";nb_deposits:" << BLUE << _nbDeposits << RESET << endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	cout << "index:" << BLUE << _accountIndex << RESET 
	<< ";p_amount:" << BLUE << _amount << RESET 
	<< ";withdrawal:";
	if (_amount >= withdrawal) {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		cout << BLUE << withdrawal << RESET 
		<< ";amount:" << BLUE << _amount << RESET 
		<< ";nb_withdrawals:" << BLUE << _nbWithdrawals << RESET << endl;
		return (true);
	} 
	else {
		cout << "refused" << endl;
		return (false);
	}
}