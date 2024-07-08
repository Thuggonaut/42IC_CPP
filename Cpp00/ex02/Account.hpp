// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

//Declaration of the Account class
class Account {


public:

	typedef Account		t; //Declare a self-referential pointer type

	static int	getNbAccounts( void ); //Return the number of accounts created
	static int	getTotalAmount( void ); //Return the total amount of money in all accounts
	static int	getNbDeposits( void ); //Return the total number of deposits made
	static int	getNbWithdrawals( void ); //Return the total number of withdrawals made
	static void	displayAccountsInfos( void ); //Display the number of accounts, total amount, total deposits, and total withdrawals

	Account( int initial_deposit ); //Constructor
	~Account( void ); //Destructor

	void	makeDeposit( int deposit ); //Make a deposit into the account
	bool	makeWithdrawal( int withdrawal ); //Make a withdrawal from the account todo
	int		checkAmount( void ) const; //Check the current amount in the account todo
	void	displayStatus( void ) const; //Display the account status


private:

	static int	_nbAccounts; //Number of accounts created
	static int	_totalAmount; //Total amount of money in all accounts
	static int	_totalNbDeposits; //Total number of deposits made across all accounts
	static int	_totalNbWithdrawals; //Total number of withdrawals made across all accounts

	static void	_displayTimestamp( void ); //Display the current timestamp 

	int				_accountIndex; //Unique account index
	int				_amount; //Current amount in the account
	int				_nbDeposits; //Total number of deposits made from an account
	int				_nbWithdrawals; //Total number of withdrawals made from an account

	Account( void ); //Private constructor to prevent instantiation from outside the class

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
