// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t; //vector of Account objects
	typedef std::vector<int>								  ints_t; //vector of integers
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t; //Pair of iterators pointing to accounts and integers

	//Initialize `accounts` vector with initial amounts
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 }; 
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) ); //Size of `amounts` array
	accounts_t				accounts( amounts, amounts + amounts_size ); //Create `accounts` with initial amounts
	accounts_t::iterator	acc_begin	= accounts.begin(); //Iterator to the beginning of `accounts`
	accounts_t::iterator	acc_end		= accounts.end(); //Iterator to the end of `accounts`

	//Initialize deposits vector with deposit amounts
	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 }; 
	size_t const		d_size( sizeof(d) / sizeof(int) ); //Size of `d` array
	ints_t				deposits( d, d + d_size ); //Create `deposits` with deposit amounts
	ints_t::iterator	dep_begin	= deposits.begin(); //Iterator to the beginning of `deposits`
	ints_t::iterator	dep_end		= deposits.end(); //Iterator to the end of `deposits`

    //Initialize withdrawals vector with withdrawal amounts
	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) ); //Size of `w` array
	ints_t				withdrawals( w, w + w_size ); //Create `withdrawals` with withdrawal amounts
	ints_t::iterator	wit_begin	= withdrawals.begin(); //Iterator to the beginning of `withdrawals`
	ints_t::iterator	wit_end		= withdrawals.end(); //Iterator to the end of `withdrawals`

	//Display initial account statuses
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); //For each account, display its status

	//Perform transactions
	for ( acc_int_t it( acc_begin, dep_begin ); //Until we've processed all deposits
		  it.first != acc_end && it.second != dep_end; //Until we've processed all withdrawals
		  ++(it.first), ++(it.second) ) { //Increment both iterators of accounts and integers

		(*(it.first)).makeDeposit( *(it.second) ); //Make deposit based on `deposits` vector
	}

	//Display account statuses after deposits
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	//Perform transactions
	for ( acc_int_t it( acc_begin, wit_begin ); //Until we've processed all withdrawals
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) { //Increment both iterators of accounts and integers

		(*(it.first)).makeWithdrawal( *(it.second) ); //Make withdrawal based on `withdrawals` vector
	}

	//Display account statuses after withdrawals
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:	                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
