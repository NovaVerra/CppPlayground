#include "../includes/section_challenge/header.h"
#include "../includes/section_challenge/Person.h"

template <typename T>
void	display(std::set<T> &set)
{
	std::cout << "[ ";
	for (auto elem : set)
		std::cout << elem << " ";
	std::cout << "]" << std::endl;
}

void	test_00()
{
	std::set<int>	set_00 {4, 5, 3, 1, 2};
	display(set_00);

	set_00.insert(10);
	display(set_00);
	
	if (set_00.count(10))
		std::cout << "10 is in the set" << std::endl;
	else
		std::cout << "10 is nont in the set" << std::endl;

	std::set<int>	set_01 {4, 3, 3, 5, 4, 3, 2, 1, 1, 1, 2, 4};
	display(set_01);

	set_01.insert(20);
	display(set_01);

	set_00.clear();
	display(set_00);
}

void	test_01()
{
	std::set<Person>	set_00	// ordered by operator<() which is age
	{
		{"Charlie", 1},
		{"Bobby", 2},
		{"Amber", 3}
	};
	display(set_00);

	set_00.emplace("Diego", 5);
	display(set_00);

	set_00.emplace("Frankie", 5);	// cannont emplace as "5" already exists
	display(set_00);
}

void	test_02()
{
	std::set<std::string>	set_00 {"A", "B", "C"};
	auto result = set_00.insert("D");
	std::cout << std::boolalpha;
	std::cout << "first result: " << *(result.first) << std::endl;
	std::cout << "second result: " << result.second << std::endl;
}

int	main()
{
	// test_00();
	// test_01();
	test_02();
	test_03();
	test_04();
	return 0;
}
