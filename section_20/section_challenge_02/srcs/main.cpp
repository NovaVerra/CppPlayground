#include "../includes/section_challenge/header.h"

std::string					clean_string(std::string str)
{
	std::string	res {};
	for (auto &c : str)
		if (isalpha(c))
		{
			c = toupper(c);
			res.push_back(c);
		}
	return res;
}

void						display(const std::map<std::string, int> &m)
{
	std::cout << std::setw(15) << std::left << "Word";
	std::cout << std::setw(5) << std::right << "Count" << std::endl;
	for (auto pair : m)
	{
		std::cout << std::setw(15) << std::left << pair.first;
		std::cout << std::setw(5) << std::right << pair.second << std::endl;
	}
}

void						display(const std::map<std::string, std::set<int>> &m)
{
	std::cout << std::setw(15) << std::left << "Word";
	std::cout << std::setw(5) << std::right << "Line #" << std::endl;
	for (auto pair : m)
	{
		std::cout << std::setw(15) << std::left << pair.first;
		for (auto num : pair.second)
			std::cout << num << " ";
		std::cout << std::endl;
	}
}

void						section_00()
{
	std::string					word {};
	std::map<std::string, int>	words {};
	std::string					line {};

	std::ifstream				in_file {};
	in_file.open("./sample_files/words.txt");
	if (!in_file)
		std::cerr << "Error opening file" << std::endl;

	while (std::getline(in_file, line))
	{
		std::stringstream	iss {line};
		while (iss >> word)
		{
			word = clean_string(word);
			words[word]++;
		}
	}
	display(words);
}
void						section_01()
{
	int										line_num {0};
	std::string								word {};
	std::map<std::string, std::set<int>>	words {};
	std::string								line {};

	std::ifstream				in_file {};
	in_file.open("./sample_files/words.txt");
	if (!in_file)
		std::cerr << "Error opening file" << std::endl;

	while (std::getline(in_file, line))
	{
		line_num++;
		std::stringstream	iss {line};
		while (iss >> word)
		{
			word = clean_string(word);
			words[word].insert(line_num);
		}
	}
	display(words);
}

int	main()
{
	section_00();
	section_01();
	return 0;
}
