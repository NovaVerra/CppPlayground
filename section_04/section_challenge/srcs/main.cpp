#include "../includes/section_challenge/header.h"

int		main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	int	favorite_number {0};

	cout << "Please enter your favorite number between 1-100" << endl;
	cin >> favorite_number;
	cin.clear();
	cin.ignore();
	cout << "Wow! That is my favorite number!" << endl;
	cout << "No really, " << favorite_number << " is my favorite number!" << endl;
}
