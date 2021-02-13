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
protected:
	string	name;
	double	balance;

public:
	// Constructors
	Account();
	Account(string name_to_set, double balance_to_set);

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
