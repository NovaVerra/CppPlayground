#include "../includes/my_string/header.h"

int	main()
{
	MyString Amber {"Amber"};				// no args constructor
	MyString Bobby {"Bobby"};				// args constructor
	MyString Charlie {};
	display(Bobby);							// copy constructor

	Amber = Bobby;							// overloaded assignment operator L
	Charlie = MyString {"Charlie"};			// overloaded assignment operator R
	
	vector<MyString> vec {};
	vec.push_back(MyString{"Person 1"});	// move constructor
	
	Bobby = -Bobby;							// operator -
	display(Bobby);

	Charlie = Amber + Bobby;				// operator +
	display(Charlie);
	Charlie += Bobby;						// operator +
	display(Charlie);

	cout << Charlie << endl;				// operator <<

	cin >> Charlie;							// operator >>
	cout << Charlie;

	cout << std::boolalpha;
	cout << (Amber < Bobby) << endl;
	cout << (Amber > Bobby) << endl;
	cout << (Amber != Bobby) << endl;
	cout << (Amber == Bobby) << endl;

	return 0;
}

void	display(const MyString s)
{
	s.display_str();
}
