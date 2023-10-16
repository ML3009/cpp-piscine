/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:43:36 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/12 13:43:39 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account ( int initial_deposit) {

    this->_accountIndex = this->getNbAccounts();
    this-> _amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";amount:" << this->checkAmount()
    << ";created" << std::endl;
    Account::_nbAccounts += 1;
}

Account::~Account( void ){

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";amount:" << this->checkAmount()
    << ";closed" << std::endl;
    Account::_nbAccounts --;
}

int Account::getNbAccounts( void ){

    return Account::_nbAccounts;
}

int Account::getTotalAmount( void ){

    return Account::_totalAmount;
}

int Account::getNbDeposits( void ){

    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals ( void ){

    return Account::_totalNbWithdrawals;
}

void    Account ::makeDeposit ( int deposit ){

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";p_amount:" << this->checkAmount()
    << ";deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits += 1;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;
    std::cout << ";amount:" << this->checkAmount()
    << ";nb_deposits:" << this->_nbDeposits
    << std::endl;

    return ;
}

bool    Account::makeWithdrawal ( int withdrawal ){

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";p_amount:" << this->checkAmount()
    << ";withdrawal:";
    if (this->checkAmount() >= withdrawal){
        this->_amount -= withdrawal;
        this->_nbWithdrawals ++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals ++;
        std::cout << withdrawal
        << ";amount:" << this->checkAmount()
        << ";nb_withdrawals:" << this->_nbWithdrawals
        << std::endl;
        return true;
    }
    std::cout << "refused" << std::endl;
    return false;
}

int Account::checkAmount( void ) const{

    return this->_amount;
}

void    Account::displayStatus( void ) const{

    Account::_displayTimestamp();
    std::cout
    << "index:" << this->_accountIndex
    << ";amount:" << this->_amount
    << ";deposits:" << this->_nbDeposits
    << ";withdrawals:" << this->_nbWithdrawals
    << std::endl;

    return ;
}

void    Account::_displayTimestamp( void ){

    time_t now;
    struct tm * timeinfo;
    char buffer[20];
    time(&now);
    timeinfo = localtime(&now);
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
    return ;
}

void    Account::displayAccountsInfos( void ){

    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts()
    << ";total:" << Account::getTotalAmount()
    << ";deposits:" << Account::getNbDeposits()
    << ";withdrawals:" << Account::getNbWithdrawals()
    << std::endl;
    return ;
}
