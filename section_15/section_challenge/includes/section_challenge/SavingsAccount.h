#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_

#include "./Account.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

class SavingsAccount : public Account
{
private:
	static constexpr char	default_name[] = "Default Savings Account";
	static constexpr double	default_balance = 0.0;
	static constexpr double	default_interest_rate = 0.0;

protected:
	double	interest_rate;

public:
	// Constructors
	SavingsAccount(string name_to_set = default_name, double balance_to_set = default_balance, double interest_rate_to_set = default_interest_rate);

	// Destructors
	~SavingsAccount();

	// Basic setters
	bool	deposit(double value);

	// Overloaders
	friend ostream	&operator<<(ostream &os, const SavingsAccount &rhs);
};

#endif
