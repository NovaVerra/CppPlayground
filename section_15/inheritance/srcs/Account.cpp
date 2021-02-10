#include "../includes/inheritance/Account.h"

/*********************************
*          Constructors          *
*********************************/
Account::Account()
: Account {0}
{
	cout << "Account Function Executed - no args constructor" << endl;
}

Account::Account(double balance_to_set)
{
	balance = balance_to_set;
	cout << "Account Function Executed - args constructor" << endl;
}

/*********************************
*           Destructor           *
*********************************/
Account::~Account()
{
	cout << "Account Function Executed - destructor" << endl;
}

/*********************************
*             Mover              *
*********************************/


/*********************************
*             Copier             *
*********************************/
Account::Account(const Account &source)
: Account {source.balance}
{
	cout << "Account Function Executed - copier" << endl;
}


/*********************************
*            Getters             *
*********************************/
int		Account::get_balance() { return balance; }
void	Account::display_balance() { cout << balance << endl; }

/*********************************
*            Setters             *
*********************************/



/*********************************
*          Overloaders           *
*********************************/
Account	&Account::operator=(const Account &rhs)
{
	cout << "Account Function Executed - assignment operator" << endl;
	if (this == &rhs)
		return *this;
	balance = rhs.balance;
	return *this;
}
