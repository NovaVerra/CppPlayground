#include "../includes/section_challenge/CheckingAccount.h"

/*********************************
*          Constructors          *
*********************************/
CheckingAccount::CheckingAccount(string name_to_set, double balance_to_set, double withdraw_fee_to_set)
: Account {name_to_set, balance_to_set}, withdraw_fee {withdraw_fee_to_set}
{}

bool	CheckingAccount::withdraw(double value)
{
	return Account::withdraw(value + withdraw_fee);
}
