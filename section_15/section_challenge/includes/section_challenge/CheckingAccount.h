#ifndef _CHECKINGACCOUNT_H_
#define _CHECKINGACCOUNT_H_

#include "./Account.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class CheckingAccount : public Account
{
private:
	static constexpr char	default_name[] = "Default Checking Account";
	static constexpr double	default_balance = 5000.0;
	static constexpr double	default_withdraw_fee = 1.5;

protected:
	double	withdraw_fee;

public:
	// Constructor
	CheckingAccount
	(
		string name_to_set = default_name,
		double balance_to_set = default_balance,
		double withdraw_fee_to_set = default_withdraw_fee
	);

	// Setter
	bool	withdraw(double value);
};

#endif
