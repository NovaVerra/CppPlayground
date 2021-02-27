#include "../includes/section_challenge/Account.h"

/*********************************
*          Constructors          *
*********************************/
Account::Account(string name_to_set, double balance_to_set)
: name {name_to_set}, balance {balance_to_set}
{}

/*********************************
*            Setters             *
*********************************/
bool	Account::deposit(double amount)
{
	if (amount > 0)
	{
		balance += amount;
		return true;
	}
	else
	{
		cout << "Error - Negative deposit amount" << endl;
		return false;
	}
}

bool	Account::withdraw(double amount)
{
	if (amount < balance)
	{
		balance -= amount;
		return true;
	}
	else
	{
		cout << "Error - Insufficient Fund" << endl;
		return false;
	}
}

/*********************************
*            Getters             *
*********************************/
void	Account::print(ostream &os) const
{
	os << fixed;
	os << setprecision(2);
	os << "[Account: " << name << ": " << balance << "]" << endl;
}
