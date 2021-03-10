#include "../includes/section_challenge/header.h"

int	main()
{
	string		answer_key {};
	string		student_name {};
	string		student_answer {};
	ifstream	result {};

	result.open("./sample_files/file.txt");

	if (!result)
		cerr << "Error opening file" << endl;
	
	result >> answer_key;

	while (!result.eof())
	{
		result >> student_name >> student_answer;
		cout << student_name << ": " << student_answer << " (" << check_answer(answer_key, student_answer) << "/5)" << endl;
	}

	return 0;
}

int	check_answer(string answer_key, string student_answer)
{
	int	score {0};
	for (size_t i {0}; i < 5; i++)
		if (student_answer.at(i) == answer_key.at(i))
			score++;
	return score;
}