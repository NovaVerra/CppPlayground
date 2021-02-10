#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>

using std::cout;
using std::endl;

class Account
{
private:
	double	balance;

public:
	// Constructors
	Account();
	Account(double balance_to_set);

	// Destructors
	~Account();

	// Copier
	Account(const Account &source);

	// Basic getters
	int		get_balance();
	void	display_balance();

	// Overloaders
	Account	&operator=(const Account &rhs);
};

#endif
