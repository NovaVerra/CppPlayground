#include "../includes/section_challenge/header.h"

int	main()
{
	ifstream	in_file {};
	ofstream	out_file {};
	string		line {};
	int	line_number {0};

	in_file.open("./sample_files/in_file.txt");
	out_file.open("./sample_files/out_file.txt");

	if (!in_file)
		cerr << "Error opening file" << endl;
	if (!out_file)
		cerr << "Error opening file" << endl;

	while (getline(in_file, line))
	{
		out_file << line_number << "\t";
		out_file << line << endl;
		line_number++;
	}

	return 0;
}
