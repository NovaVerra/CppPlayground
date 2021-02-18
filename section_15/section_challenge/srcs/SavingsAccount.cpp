#include "../includes/section_challenge/SavingsAccount.h"

/*********************************
*          Constructors          *
*********************************/
SavingsAccount::SavingsAccount(string name_to_set, double balance_to_set, double interest_rate_to_set)
: Account {name_to_set, balance_to_set}, interest_rate {interest_rate_to_set}
{}

/*********************************
*           Destructor           *
*********************************/
SavingsAccount::~SavingsAccount() {}

/*********************************
*            Setters             *
*********************************/
bool	SavingsAccount::deposit(double value)
{
	value += value * (interest_rate / 100);
	return Account::deposit(value);
}

/*********************************
*          Overloaders           *
*********************************/
ostream	&operator<<(ostream &os, const SavingsAccount &rhs)
{
	os << rhs.name << ": " << rhs.balance << " | " << rhs.interest_rate << endl;
	return os;
}
