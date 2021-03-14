#include "../includes/section_challenge/header.h"
#include "../includes/section_challenge/Item.h"

int	main()
{
	Item<int>		item1 {"Leo", 15};
	cout << item1.get_name() << ": " << item1.get_value() << endl;

	Item<string>	item2 {"Leo", "PS5"};
	cout << item2.get_name() << ": " << item2.get_value() << endl;

	my_pair<string, int> pair1 {"Amber", 30};
	cout << pair1.first << ": " << pair1.second << endl;

	my_pair<double, double> pair2 {10.5, 5.5};
	cout << pair2.first << ": " << pair2.second << endl;

	return 0;
}
