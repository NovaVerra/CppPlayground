#include "../includes/section_challenge/header.h"
#include "../includes/section_challenge/AccountUtil.h"
#include "../includes/section_challenge/Account.h"
#include "../includes/section_challenge/CheckingAccount.h"
#include "../includes/section_challenge/SavingsAccount.h"
#include "../includes/section_challenge/TrustAccount.h"

#include <iostream>
using std::cout;
using std::endl;

int	main()
{
	unique_ptr<Account>	c1 = make_unique<CheckingAccount>();
	unique_ptr<Account>	c2 = make_unique<CheckingAccount>();

	cout << *c1 << endl;

	c2 = move(c1);

	cout << *c2 << endl;

	if (c1 == nullptr)
		cout << "c1 is empty" << endl;

	return 0;
}
