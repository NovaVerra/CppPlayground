#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_

#include "./Account.h"
#include <iostream>

using std::cout;
using std::endl;

class SavingsAccount : public Account
{
private:
	double interest;

public:
	// Constructors
	SavingsAccount();
	SavingsAccount(double interest_to_set);
	
	// Destructors
	~SavingsAccount();
	
	// Copier
	SavingsAccount(const SavingsAccount &rhs);
	
	// Basic getters
	int		get_interest();
	void	display_interest();
	
	// Overloaders
	SavingsAccount	&operator=(const SavingsAccount &rhs);
};

#endif
