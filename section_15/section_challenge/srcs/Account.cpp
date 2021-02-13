#include "../includes/section_challenge/Account.h"

/*********************************
*          Constructors          *
*********************************/
Account::Account()
: Account {"Account", 25'000}
{}

Account::Account(string name_to_set, double balance_to_set)
{
	name = name_to_set;
	balance = balance_to_set;
}

/*********************************
*           Destructor           *
*********************************/
Account::~Account() {}

/*********************************
*             Mover              *
*********************************/


/*********************************
*             Copier             *
*********************************/


/*********************************
*            Getters             *
*********************************/
string	Account::get_name() { return name; }
double	Account::get_balance() { return balance; }

/*********************************
*            Setters             *
*********************************/
bool	Account::deposit(double value)
{
	if (value < 0)
	{
		cout << "Deposit amount is negative" << endl;
		return false;
	}
	else
	{
		balance += value;
		return true;
	}
}

bool	Account::withdraw(double value)
{
	if (value < balance)
	{
		balance -= value;
		return true;
	}
	else
	{
		cout << "Insufficient Fund" << endl;
		return false;
	}
}

/*********************************
*          Overloaders           *
*********************************/
ostream	&operator<<(ostream &os, const Account &rhs)
{
	os << rhs.name << ": " << rhs.balance << endl;
	return os;
}
