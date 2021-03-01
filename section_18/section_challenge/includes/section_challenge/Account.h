#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include "./IPrintable.h"
#include "./IllegalBalanceException.h"
#include <string>
#include <iostream>
#include <iomanip>

using std::string;
using std::cout;
using std::endl;
using std::ostream;
using std::setprecision;
using std::fixed;

class Account : public IPrintable
{
private:
	static constexpr char	default_name[] = "Default Account";
	static constexpr double	default_balance = 25'000;

protected:
	string	name;
	double	balance;

public:
	// Constructor
	Account(string name_to_set = default_name, double balance_to_set = default_balance);

	// Destructor
	virtual			~Account() = default;

	// Setters
	virtual bool	deposit(double amount) = 0;
	virtual bool	withdraw(double amount) = 0;

	// Getters
	virtual void	print(ostream &os) const override;
};

#endif
