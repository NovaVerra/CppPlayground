#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Account
{
private:
	static constexpr char	default_name[] = "Default Account";
	static constexpr double	default_balance = 25000.0;

protected:
	string	name;
	double	balance;

public:
	// Constructors
	Account(string name_to_set = default_name, double balance_to_set = default_balance);

	// Destructors
	~Account();

	// Mover
	// Copier
	// Basic getters
	string	get_name();
	double	get_balance();

	// Basic setters
	bool	deposit(double value);
	bool	withdraw(double value);

	// Overloaders
	friend ostream	&operator<<(ostream &os, const Account &rhs);
};

#endif
