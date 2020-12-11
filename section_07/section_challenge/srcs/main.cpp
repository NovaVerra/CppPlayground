#include "../includes/section_challenge/header.h"

int	main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	// init
	vector <int>			vector1 {};
	vector <int>			vector2 {};
	vector <vector <int>>	vector_2d {};

	// filling in vector1
	vector1.push_back(10);
	vector1.push_back(20);
	cout << "vector1: ";
	for (size_t i = 0; i < vector1.size(); i++)
	{
		cout << vector1.at(i) << ", ";
	}
	cout << endl;

	// filling in vector2
	vector2.push_back(100);
	vector2.push_back(200);
	cout << "vector2: ";
	for (size_t i = 0; i < vector2.size(); i++)
	{
		cout << vector2.at(i) << ", ";
	}
	cout << endl;

	// filling in vector_2d with vector1&2
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	// displaying vector_2d
	cout << "vector_2d: ";
	for (size_t i = 0; i < vector_2d.size(); i++)
	{
		for (size_t j = 0; j < vector_2d.at(i).size();j++)
		{
			cout << vector_2d.at(i).at(j) << ", ";
		}
		cout << endl;
	}
	cout << endl;

	// changing vector1 value
	vector1.at(0) = 1000;

	// displaying vector_2d
	cout << "vector_2d: ";
	for (size_t i = 0; i < vector_2d.size(); i++)
	{
		for (size_t j = 0; j < vector_2d.at(i).size();j++)
		{
			cout << vector_2d.at(i).at(j) << ", ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "vector1: ";
	for (size_t i = 0; i < vector1.size(); i++)
	{
		cout << vector1.at(i) << ", ";
	}
	cout << endl;
}
