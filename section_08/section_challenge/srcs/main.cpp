#include "../includes/section_challenge/header.h"

int	main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	int	value_in_cents {0};
	int	dollar {0};
	int	quarter {0};
	int	dime {0};
	int	nickle {0};
	int	penny {0};

	cout << "Please enter the number of cents you have: ";
	cin >> value_in_cents;
	
	while (value_in_cents >= 100)
	{
		value_in_cents -= 100;
		dollar++;
	}
	while (value_in_cents >= 25)
	{
		value_in_cents -= 25;
		quarter++;
	}
	while (value_in_cents >= 10)
	{
		value_in_cents -= 10;
		dime++;
	}
	while (value_in_cents >= 5)
	{
		value_in_cents -= 5;
		nickle++;
	}
	while (value_in_cents >= 1)
	{
		value_in_cents -= 1;
		penny++;
	}
	cout << "Dollar: " << dollar << endl;
	cout << "Quarter: " << quarter << endl;
	cout << "Dime: " << dime << endl;
	cout << "Nickle: " << nickle << endl;
	cout << "Penny: " << penny << endl;
}
