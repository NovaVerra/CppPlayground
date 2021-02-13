#include "../includes/inheritance/SavingsAccount.h"

/*********************************
*          Constructors          *
*********************************/
SavingsAccount::SavingsAccount()
: SavingsAccount {0}
{
	cout << "SavingsAccount Function Executed - no args constructor" << endl;
}

SavingsAccount::SavingsAccount(double interest_to_set)
: Account {25'000}
{
	interest = interest_to_set;
	cout << "SavingsAccount Function Executed - args constructor" << endl;
}

/*********************************
*           Destructor           *
*********************************/
SavingsAccount::~SavingsAccount()
{
	cout << "SavingsAccount Function Executed - destructor" << endl;
}

/*********************************
*             Mover              *
*********************************/

/*********************************
*             Copier             *
*********************************/
SavingsAccount::SavingsAccount(const SavingsAccount &rhs)
: Account {rhs}, interest {rhs.interest}
{
	cout << "SavingsAccount Function Executed - copier" << endl;
}

/*********************************
*            Getters             *
*********************************/
int		SavingsAccount::get_interest() { return interest; }
void	SavingsAccount::display_interest() { cout << interest << endl; }

/*********************************
*            Setters             *
*********************************/



/*********************************
*          Overloaders           *
*********************************/
SavingsAccount	&SavingsAccount::operator=(const SavingsAccount &rhs)
{
	cout << "SavingsAccount Function Executed - assignment operator" << endl;
	if (this == &rhs)
		return *this;
	Account::operator=(rhs);
	interest = rhs.interest;
	return *this;
}
