#ifndef _TRUSTACCOUNT_H_
#define _TRUSTACCOUNT_H_

#include "./SavingsAccount.h"
#include <string>

using std::string;

class TrustAccount : public SavingsAccount
{
private:
	static constexpr char	default_name[] = "Default Trust Account";
	static constexpr double	default_balance = 25'000;
	static constexpr double	default_interest_rate = 2.5;
	static constexpr double	default_bonus_amount = 50.0;
	static constexpr double	default_bonus_threshold = 5000.0;
	static constexpr int	default_max_withdraws = 3;
	static constexpr double	default_max_withdraw_percentage = 0.2;

protected:
	double bonus_amount;
	double bonus_threshold;
	double max_withdraws;
	double max_withdraw_percentage;

public:
	// Constructor
	TrustAccount(
		string name = default_name,
		double balance = default_balance,
		double interest_rate = default_interest_rate,
		double bonus_amount = default_bonus_amount,
		double bonus_threshold = default_bonus_threshold,
		double max_withdraws = default_max_withdraws,
		double max_withdraw_percentage = default_max_withdraw_percentage
	);

	// Destructor
	virtual ~TrustAccount() = default;

	// Setters
	virtual bool	deposit(double amount) override;
	virtual bool	withdraw(double amount) override;

	// Getters
	virtual void	print(ostream &os) const override;
};

#endif
