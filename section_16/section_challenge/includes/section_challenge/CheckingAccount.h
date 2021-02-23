#ifndef _CHECKINGACCOUNT_H_
#define _CHECKINGACCOUNT_H_

#include "./Account.h"
#include <string>

using std::string;

class CheckingAccount : public Account
{
private:
	static constexpr char	default_name[] = "Default Checking Account";
	static constexpr double	default_balance = 25'000;
	static constexpr double	default_withdraw_fee = 1.5;

protected:
	double	withdraw_fee;

public:
	// Constructor
	CheckingAccount(string name = default_name, double balance = default_balance, double withdraw_fee = default_withdraw_fee);

	// Destructor
	virtual ~CheckingAccount() = default;

	// Setters
	virtual bool	deposit(double amount) override;
	virtual bool	withdraw(double amount) override;

	// Getters
	virtual void	print(ostream &os) const override;
};

#endif
