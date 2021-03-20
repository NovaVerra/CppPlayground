#include "../includes/section_challenge/header.h"

bool is_palindrome(const std::string& s)
{
	char	back {};
	char	front {};
	std::deque<char>	word {};
	for (char c : s)
	{
		if (std::isalpha(c))
			word.push_back(std::toupper(c));
	}
	while (word.size() > 1)
	{
		back = word.back();
		front = word.front();
		word.pop_back();
		word.pop_front();
		if (back != front)
			return false;
	}
	return true;
}

int main()
{
	std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
		"avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
		"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
	std::cout << std::boolalpha;
	std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
	for(const auto& s : test_strings) {
		std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
	}
	std::cout << std::endl;
	return 0;
}