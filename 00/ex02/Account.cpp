# include "Account.hpp"

// il y a 7 comptes

Account::Account ( int initial_deposit) {
   
    std::cout << "Constructor called" << std::endl;
    std::cout << "Account has been created " << initial_deposit << std::endl;

    return ;
}

Account::~Account( void ){

    std::cout << "Destructor called" << std::endl;

    return ;
}

int Account::getNbAccounts( void ){

    return (0);
}

int Account::getTotalAmount( void ){

    return (0);
}

int Account::getNbDeposits( void ){

    return (0);
}

int Account::getNbWithdrawals ( void ){

    return (0);

}

void    Account::displayAccountsInfos( void ){

    return ;
}



void    Account ::makeDeposit ( int deposit ){

    (void)deposit;
    
    return ;
}

bool    Account::makeWithdrawal ( int withdrawal ){

    (void)withdrawal;
    
    return (false);
}

int Account::checkAmount( void ) const{

    return (0);
}

void    Account::displayStatus( void ) const{

    return ;
}