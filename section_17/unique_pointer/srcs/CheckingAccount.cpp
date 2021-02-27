#include "../includes/section_challenge/CheckingAccount.h"

/*********************************
*          Constructors          *
*********************************/
CheckingAccount::CheckingAccount(string name_to_set, double balance_to_set, double withdraw_fee_to_set)
: Account {name_to_set, balance_to_set}, withdraw_fee {withdraw_fee_to_set}
{}

/*********************************
*            Setters             *
*********************************/
bool	CheckingAccount::deposit(double amount)
{
	cout << "Checking Account - deposit" << endl;
	return Account::deposit(amount);
}

bool	CheckingAccount::withdraw(double amount)
{
	cout << "Checking Account - withdraw" << endl;
	return Account::withdraw(amount + withdraw_fee);
}

/*********************************
*            Getters             *
*********************************/

void	CheckingAccount::print(ostream &os) const
{
	os << fixed;
	os << setprecision(2);
	os << name << " has " << balance << " with a withdraw fee of : $" << withdraw_fee;
}
