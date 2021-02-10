#include "../includes/inheritance/header.h"
#include "../includes/inheritance/Account.h"
#include "../includes/inheritance/SavingsAccount.h"

int	main()
{
	SavingsAccount	sa {100};
	SavingsAccount	sa1 {sa};
	sa1 = sa;

	return 0;
}
