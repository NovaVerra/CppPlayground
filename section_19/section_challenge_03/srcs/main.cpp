#include "../includes/section_challenge/header.h"

int	main()
{
	ifstream	in_file {};
	string		word_to_find {"love"};
	string		line {};
	size_t		count {0};

	in_file.open("./sample_files/file.txt");
	if (!in_file)
		cerr << "Error opening file" << endl;
	
	while (in_file >> line)
		if (find_word(word_to_find, line))
			count++;
	
	cout << count << endl;
	
	return 0;
}

bool	find_word(const string &word_to_find, const string &line)
{
	size_t		pos = line.find(word_to_find);
	
	if (pos != string::npos)
		return true;
	else
		return false;
}
