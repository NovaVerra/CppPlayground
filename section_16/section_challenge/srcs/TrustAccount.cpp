#include "../includes/section_challenge/TrustAccount.h"

/*********************************
*          Constructors          *
*********************************/
TrustAccount::TrustAccount(string name_to_set, double balance_to_set, double interest_rate_to_set, double bonus_amount_to_set, double bonus_threshold_to_set, double max_withdraws_to_set, double max_withdraw_percentage_to_set)
: SavingsAccount {name_to_set, balance_to_set, interest_rate_to_set}, bonus_amount {bonus_amount_to_set}, bonus_threshold {bonus_threshold_to_set}, max_withdraws {max_withdraws_to_set}, max_withdraw_percentage {max_withdraw_percentage_to_set}
{}

/*********************************
*            Setters             *
*********************************/
bool	TrustAccount::deposit(double amount)
{
	cout << "Trust Account - deposit" << endl;
	return Account::deposit(amount += amount * (interest_rate / 100));
}

bool	TrustAccount::withdraw(double amount)
{
	if ((max_withdraws > 0) && (amount <= (balance * max_withdraw_percentage)))
	{
		cout << "Trust Account - withdraw" << endl;
		return Account::withdraw(amount);
	}
	else
	{
		cout << "Exceed withdraw limit" << endl;
		return false;
	}
}

/*********************************
*            Getters             *
*********************************/

void	TrustAccount::print(ostream &os) const
{
	os << fixed;
	os << setprecision(2);
	os << name << " has: $" << balance << " with a interest rate of: " << interest_rate << "%"  << " | bonus deposit amount of: $" << bonus_amount << " | bonus deposit amount threshold of: $" << bonus_threshold << " | and a max withdraw of: " << max_withdraws << " times a year" << " | with max of " << max_withdraw_percentage * 100 << "% per withdraw" << endl;
}
