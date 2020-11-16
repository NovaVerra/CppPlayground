#include "../includes/section_challenge/header.h"

int		main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	int		day {0};
	int		month {0};
	double	year {0.0};

	cout << "Please enter your birthday with the following format \"MM DD\" (delimited by space)" << endl;
	cin >> day >> month;
	cout << "Please enter the year in which you were born" << endl;
	cin >> year;
	cout << "Your birthday is on " << day << "-" << month << "-" << year << endl;
}
