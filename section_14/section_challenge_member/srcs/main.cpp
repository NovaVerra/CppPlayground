#include "../includes/section_challenge/header.h"
#include "../includes/section_challenge/MyString.h"

int	main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	cout << boolalpha << endl;
	MyString a {"frank"};
	MyString b {"frank"};
	cout << (a == b) << endl;
	cout << (a != b) << endl;

	b = "george";
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a < b) << endl;
	cout << (a > b) << endl;

	MyString s1 {"FRANK"};
	cout << s1 << endl;
	s1 = -s1;
	cout << s1 << endl;
	s1 = s1 + "*****";
	cout << s1 << endl;
	s1 = s1 + "-----";
	cout << s1 << endl;

	MyString s2 {"12345"};
	s2 = s2 * 3;
	cout << s2 << endl;

	MyString s3 {"abcdef"};
	s3 *= 5;
	cout << s3 << endl;

	MyString s {"frank"};
	MyString st {s++};
	cout << s << endl;
	cout << st << endl;
}
