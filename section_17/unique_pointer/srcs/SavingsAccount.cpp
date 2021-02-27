#include "../includes/section_challenge/SavingsAccount.h"

/*********************************
*          Constructors          *
*********************************/
SavingsAccount::SavingsAccount(string name_to_set, double balance_to_set, double interest_rate_to_set)
: Account {name_to_set, balance_to_set}, interest_rate {interest_rate_to_set}
{}

/*********************************
*            Setters             *
*********************************/
bool	SavingsAccount::deposit(double amount)
{
	cout << "Savings Account - deposit" << endl;
	return Account::deposit(amount += amount * (interest_rate / 100));
}

bool	SavingsAccount::withdraw(double amount)
{
	cout << "Savings Account - withdraw" << endl;
	return Account::withdraw(amount);
}

/*********************************
*            Getters             *
*********************************/

void	SavingsAccount::print(ostream &os) const
{
	os << fixed;
	os << setprecision(2);
	os << name << " has " << balance << " with a interest rate of : " << interest_rate << "%";
}
