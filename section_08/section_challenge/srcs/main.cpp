#include "../includes/section_challenge/header.h"

int	main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	const int	DOLLAR_VALUE {100};
	const int	QUARTER_VALUE {25};
	const int	DIME_VALUE {10};
	const int	NICKLE_VALUE {5};
	const int	PENNY_VALUE {1};

	int			value_in_cents {0};
	int			dollar {0};
	int			quarter {0};
	int			dime {0};
	int			nickle {0};
	int			penny {0};

	cout << "Please enter the number of cents you have: ";
	cin >> value_in_cents;
	
	dollar = value_in_cents / DOLLAR_VALUE;
	value_in_cents %= DOLLAR_VALUE;

	quarter = value_in_cents / QUARTER_VALUE;
	value_in_cents %= QUARTER_VALUE;

	dime = value_in_cents / DIME_VALUE;
	value_in_cents %= DIME_VALUE;

	nickle = value_in_cents / NICKLE_VALUE;
	value_in_cents %= NICKLE_VALUE;

	penny = value_in_cents / PENNY_VALUE;
	value_in_cents %= PENNY_VALUE;

	cout << "Dollar:  " << dollar << endl;
	cout << "Quarter: " << quarter << endl;
	cout << "Dime:    " << dime << endl;
	cout << "Nickle:  " << nickle << endl;
	cout << "Penny:   " << penny << endl;
}
