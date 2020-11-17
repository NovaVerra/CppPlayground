#include "../includes/section_challenge/header.h"

int		main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	const double	TAX	{1.06};
	const double	large_room_cost {25.0};
	const double	small_room_cost {35.0};
	int				large_room_number {0};
	int				small_room_number {0};

	cout << "Welcome to Frank's Carpet Cleaning Services!" << endl << endl;
	cout << "Large Room costs $" << large_room_cost << endl;
	cout << "Small Room costs $" << small_room_cost << endl << endl;

	cout << "Please enter the amount of \"LARGE\" rooms you would like to clean: ";
	cin >> large_room_number;
	cout << "Please enter the amount of \"SMALL\" rooms you would like to clean: ";
	cin >> small_room_number;
	cout << "\nYour total is $" << ((large_room_cost * large_room_number) + (small_room_cost * small_room_number)) * TAX << " including Tax" << endl;
}
