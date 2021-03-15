#include "../includes/section_challenge/header.h"
#include "../includes/section_challenge/Person.h"

void	find_test()
{
	vector<int>	num {1, 2, 3, 4, 5};
	auto	loc1 = find(num.begin(), num.end(), 3);
	if (loc1 != num.end())
		cout << "Number found: " << *loc1 << endl;
	else
		cout << "Number not found" << endl;

	list<Person>	players
	{
		{"Leo", 10},
		{"Amber", 15},
		{"Becky", 20}
	};
	auto	loc2 {find(players.begin(), players.end(), Person {"Leo", 10})};
	if (loc2 != players.end())
		cout << "Person found: " << loc2->get_name() << endl;
	else
		cout << "Person not found!" << endl;
}

void	count_test()
{
	vector<int>	num1 {1, 2, 3, 4, 5, 6, 2, 3, 1, 1};
	cout << "The number \"1\" shows up: ";
	cout << count(num1.begin(), num1.end(), 1) << " times" << endl;

	vector<int>	num2 {2, 4, 6, 8, 9};
	cout << "There are: ";
	cout << count_if(num2.begin(), num2.end(), [] (int x){ return x % 2 == 0; }) << " even numbers" << endl;
}

void	replace_test()
{
	vector<int>	num1 {1, 2, 3, 4, 5, 1, 1, 3};
	replace(num1.begin(), num1.end(), 1, 100);
	for (auto num : num1)
		cout << num << " ";
}

void	all_of_test()
{
	vector<int>	num1 {1, 2, 3, 4, 5, 6, 7, 8, 10, 15, 19};
	cout << boolalpha;
	cout << "all the numbers are smaller than 20 - ";
	cout << all_of(num1.begin(), num1.end(), [] (int x) { return x < 20; }) << endl;
	// any_of() is also a valid function as well!
}

int		main()
{
	// find_test();
	// count_test();
	// replace_test();
	all_of_test();
	return 0;
}
