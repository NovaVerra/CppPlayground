#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_

#include "./Account.h"
#include <string>

using std::string;

class SavingsAccount : public Account
{
private:
	static constexpr char	default_name[] = "Default Savings Account";
	static constexpr double	default_balance = 25'000;
	static constexpr double	default_interest_rate = 2.5;

protected:
	double	interest_rate;

public:
	// Constructor
	SavingsAccount(string name = default_name, double balance = default_balance, double interest_rate = default_interest_rate);

	// Destructor
	virtual ~SavingsAccount() = default;

	// Setters
	virtual bool	deposit(double amount) override;
	virtual bool	withdraw(double amount) override;

	// Getters
	virtual void	print(ostream &os) const override;
};

#endif
