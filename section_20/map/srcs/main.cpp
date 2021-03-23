#include "../includes/section_challenge/header.h"

template <typename T1, typename T2>
void	display(const std::map<T1, T2> &map)
{
	std::cout << "[ | ";
	for (auto &elem : map)
		std::cout << elem.first << ": " << elem.second << " | ";
	std::cout << "]" << std::endl;
}

void	display(const std::map<std::string, std::set<int>> &map)
{
	std::cout << "[ | ";
	for (const auto &elem : map)
	{
		std::cout << elem.first << ": [ ";
		for (const auto &el : elem.second)
			std::cout << el << " ";
		std::cout << "] | ";
	}
	std::cout << "]" << std::endl;
}

void	test_00()
{
	std::map<std::string, int>	map
	{
		{"Charlie", 2},
		{"Becky", 3},
		{"Amber", 1}
	};

	display(map);

	map.insert(std::make_pair<std::string, int>("Delta", 1));
	display(map);

	map.insert(std::make_pair<std::string, int>("Ekko", 5));
	display(map);

	map["Fabby"] = 10;
	display(map);

	map["Fabby"] += 8;
	display(map);

	map.erase("Fabby");
	display(map);
}

void	test_01()
{
	std::map<std::string, std::set<int>>	map
	{
		{"Amber", {4, 2, 3, 5, 1}},
		{"Becky", {50, 40, 10, 20, 30}},
		{"Charlie", {8, 4, 6, 4, 2}}
	};

	display(map);

	map["Amber"].insert(10);
	display(map);

	auto	it = map.find("Charlie");
	if (it != map.end())
		it->second.insert(1000);
	display(map);
}

int	main()
{
	// test_00();
	test_01();
	return 0;
}
