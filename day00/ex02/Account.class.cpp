#include "Account.class.hpp"
#include <iostream>
#include <time.h>

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbCheckAmount = 0;

	_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "created" << std::endl;
}

Account::Account()
{

}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ';';
	std::cout << "total:" << getTotalAmount() << ';';
	std::cout << "deposits:" << getNbDeposits() << ';';
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}




void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << checkAmount() << ';';
	std::cout << "deposit:" << deposit << ';';
	this->_amount += deposit;
	std::cout << "amount:" << checkAmount() << ';';
	this->_nbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << checkAmount() << ';';
	if (withdrawal > this->_amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ';';
		this->_amount -= withdrawal;
		std::cout << "amount:" << checkAmount() << ';';
		this->_nbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		return (true);
	}
}
int		Account::checkAmount(void) const
{
	this->_nbCheckAmount++;
	return (_amount);
}

void	Account::_displayTimestamp(void)
{
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];

	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &tstruct);
	std::cout << '[' << buf << "] ";
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "deposits:" << this->_nbDeposits << ';';
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}



int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;