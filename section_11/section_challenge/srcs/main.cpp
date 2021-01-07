#include "../includes/section_challenge/header.h"

int	main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	vector<int>	vec {10, 20, 30, 40, 50};
	char		user_selection {};

	do {
	print_menu();
	cin >> user_selection;
	user_selection = toupper(user_selection);
		switch (user_selection)
		{
			case 'P':
				print_list(vec);
				break;
			case 'A':
				add_number(vec);
				break;
			case 'M':
				calc_mean(vec);
				break;
			case 'S':
				find_min(vec);
				break;
			case 'L':
				find_max(vec);
				break;
			case 'Q':
				cout << "\nExiting menu..." << endl;
				break;
			default:
				cout << "\nInvalid menu option" << endl;
				break;
		}
	} while (user_selection != 'Q');
}

void	print_menu()
{
	cout << "\n========== MAIN MENU ==========" << endl;
	cout << "\"P\" - Print numbers" << endl;
	cout << "\"A\" - Add a number" << endl;
	cout << "\"M\" - Display Mean of the numbers" << endl;
	cout << "\"S\" - Display the min number" << endl;
	cout << "\"L\" - Display the Largest number" << endl;
	cout << "\"Q\" - Quit" << endl;
	cout << "\nPlease enter your choice: ";
}

void	print_list(vector<int> &vec)
{
	if (vec.empty())
	{
		cout << "\nUnable to process function - list is empty" << endl;
		return ;
	}
	cout << endl;
	for (auto val : vec)
		cout << val << " ";
	cout << endl;
	return ;
}

void	add_number(vector<int> &vec)
{
	int	num_to_add {0};

	if (vec.empty())
	{
		cout << "\nUnable to process function - list is empty" << endl;
		return ;
	}
	cout << "\nPlease enter a number you would like to add: ";
	cin >> num_to_add;
	vec.push_back(num_to_add);
	cout << "Successfully added " << num_to_add << " to the list" << endl;
	return ;
}

void	calc_mean(vector<int> &vec)
{
	int	mean {0};

	if (vec.empty())
	{
		cout << "\nUnable to process function - list is empty" << endl;
		return ;
	}
	for (auto val : vec)
		mean += val;
	mean /= vec.size();
	cout << "\nThe mean is: " << mean << endl;
	return ;
}

void	find_min(vector<int> &vec)
{
	int	min {0};

	if (vec.empty())
	{
		cout << "\nUnable to process function - list is empty" << endl;
		return ;
	}
	cout << endl;
	min = vec.at(0);
	for (auto val : vec)
		if (val < min)
			min = val;
	cout << "The smallest number is: " << min << endl;
	return ;
}

void	find_max(vector<int> &vec)
{
	int	max {0};

	if (vec.empty())
	{
		cout << "\nUnable to process function - list is empty" << endl;
		return ;
	}
	cout << endl;
	max = vec.at(0);
	for (auto val : vec)
		if (val > max)
			max = val;
	cout << "The largest number number is: " << max << endl;
	return ;
}
