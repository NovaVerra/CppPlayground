#include "../includes/section_challenge/header.h"

int	main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	vector<int>	vec {};
	char		user_selection {};
	int			num_to_add {0};
	int			mean {0};
	int			min {0};
	int			max {0};

	do {
	print_menu();
	cin >> user_selection;
	user_selection = toupper(user_selection);
		switch (user_selection)
		{
			case 'P':
				if (vec.empty())
				{
					cout << "\nUnable to process function - list is empty" << endl;
					break;
				}
				cout << endl;
				for (auto val : vec)
					cout << val << " ";
				cout << endl;
				break;
			case 'A':
				if (vec.empty())
				{
					cout << "\nUnable to process function - list is empty" << endl;
					break;
				}
				cout << "\nPlease enter a number you would like to add: ";
				cin >> num_to_add;
				vec.push_back(num_to_add);
				cout << "Successfully added " << num_to_add << " to the list" << endl;
				break;
			case 'M':
				if (vec.empty())
				{
					cout << "\nUnable to process function - list is empty" << endl;
					break;
				}
				for (auto val : vec)
					mean += val;
				mean /= vec.size();
				cout << "\nThe mean is: " << mean << endl;
				break;
			case 'S':
				if (vec.empty())
				{
					cout << "\nUnable to process function - list is empty" << endl;
					break;
				}
				cout << endl;
				min = vec.at(0);
				for (auto val : vec)
					if (val < min)
						min = val;
				cout << "The smallest number is: " << min << endl;
				break;
			case 'L':
				if (vec.empty())
				{
					cout << "\nUnable to process function - list is empty" << endl;
					break;
				}
				cout << endl;
				max = vec.at(0);
				for (auto val : vec)
					if (val > max)
						max = val;
				cout << "The largest number number is: " << max << endl;
				break;
			case 'Q':
				cout << "\nExiting menu..." << endl;
				break;
			default:
				cout << "\nInvalid menu option" << endl;
				break;
		}
		if (user_selection == 'Q')
			break;
	} while (true);
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
