#include "../includes/exception_handling/header.h"

class	ex_cannot_divide_my_zero{};
class	ex_negative_value{};

double	calc_mpg(int miles, int gallons)
{
	if (gallons == 0)
		throw ex_cannot_divide_my_zero();
	if (gallons < 0 || miles < 0)
		throw ex_negative_value();
	return static_cast<double>(miles) / gallons;
}

int	main()
{
	int		gallons {};
	int		miles {};
	double	mpg {};

	cout << "Enter the number of miles: ";
	cin >> miles;

	cout << "Enter the number of gallons: ";
	cin >> gallons;

	try
	{
		mpg = calc_mpg(miles, gallons);
	}
	catch (ex_cannot_divide_my_zero &ex)
	{
		cerr << "Cannot divide by zero" << endl;
	}
	catch (ex_negative_value &ex)
	{
		cerr << "Value cannot be negative" << endl;
	}

	return 0;
}
