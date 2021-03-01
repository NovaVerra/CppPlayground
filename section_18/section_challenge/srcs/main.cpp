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
	try
	{
		Account	*ca = new CheckingAccount {"Leo", -1};
		ca->deposit(199);
	}
	catch (IllegalBalanceException &ex)
	{
		cout << ex.what() << endl;
	}

	return 0;
}
