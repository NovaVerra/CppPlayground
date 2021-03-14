#include "../includes/section_challenge/header.h"

int	main()
{
	// While loop
	cout << "----- While Loop -----" << endl;
	vector<string>	names {"Leo", "Amber", "Becky"};
	auto it1 {names.begin()};
	while (it1 != names.end())
	{
		cout << *it1 << " " << endl;
		it1++;
	}
	cout << endl;

	// Ranged-based for loop
	cout << "----- Range-based For Loop -----" << endl;
	vector<int>		nums1 {1, 2, 3};
	for (auto it2 = nums1.begin(); it2 != nums1.end(); it2++)
		cout << *it2 << endl;

	// Reverse iterator
	cout << "----- Reverse Iterator -----" << endl;
	vector<int>		nums2 {1, 2, 3, 4, 5};
	auto it3 = nums2.rbegin();
	while (it3 != nums2.rend())
	{
		cout << *it3 << " " << endl;
		it3++;
	}

	// Iterating through a map
	cout << "----- Iterating through a map -----" << endl;
	map<string, string>	fav_lang
	{
		{"Leo", "C++"},
		{"Amber", "JavaScript"},
		{"Becky", "Ruby"}
	};

	auto it4 = fav_lang.begin();
	while (it4 != fav_lang.end())
	{
		cout << it4->first << " likes " << it4->second << endl;
		it4++;
	}

	return 0;
}
