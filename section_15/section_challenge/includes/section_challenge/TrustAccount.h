#ifndef _TRUSTACCOUNT_H_
#define _TRUSTACCOUNT_H_

#include "./SavingsAccount.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class TrustAccount : public SavingsAccount
{
private:
	static constexpr char	default_name[] = "Default Trust Account";
	static constexpr double	default_balance = 25000.0;
	static constexpr double	default_interest_rate = 2.5;
	static constexpr double	default_deposit_bonus = 500;
	static constexpr int	default_withdraw_limit = 4;

protected:
	double	deposit_bonus;
	int		withdraw_limit;

public:
	// Constructor
	TrustAccount
	(
		string name_to_set = default_name,
		double balance_to_set = default_balance,
		double interest_rate_to_set = default_interest_rate,
		double deposit_bonus = default_deposit_bonus,
		int withdraw_limit = default_withdraw_limit
	);

	// Setter
	bool	withdraw(double value);
};

#endif
