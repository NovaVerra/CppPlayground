#include "../includes/section_challenge/TrustAccount.h"

/*********************************
*          Constructors          *
*********************************/
TrustAccount::TrustAccount
(
	string name_to_set,
	double balance_to_set,
	double interest_rate_to_set,
	double deposit_bonus_to_set,
	int withdraw_limit_to_set
)
: SavingsAccount {name_to_set, balance_to_set, interest_rate_to_set}, deposit_bonus {deposit_bonus_to_set}, withdraw_limit {withdraw_limit_to_set}
{}

bool	TrustAccount::withdraw(double value)
{
	if (withdraw_limit > 0)
	{
		withdraw_limit--;
		return SavingsAccount::withdraw(value);
	}
	else
	{
		cout << "Exceeded maximum number of withdraw" << endl;
		return false;
	}
}
