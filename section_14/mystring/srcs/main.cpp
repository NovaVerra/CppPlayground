#include "../includes/mystring/header.h"
#include "../includes/mystring/MyString.h"

int	main()
{
	MyString	empty;
	MyString	larry {"Larry"};
	MyString	stooges {larry};

	empty.display_str();
	larry.display_str();
	stooges.display_str();
	return 0;
}
