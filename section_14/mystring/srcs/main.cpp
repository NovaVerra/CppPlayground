#include "../includes/mystring/header.h"
#include "../includes/mystring/MyString.h"

int	main()
{
	MyString	empty;
	MyString	larry {"LARRY"};
	MyString	stooges {larry};

	empty.display_str();
	larry.display_str();
	stooges.display_str();
	
	empty = larry;
	empty.display_str();
	larry = -larry;
	larry.display_str();
	MyString result = larry + stooges;
	result.display_str();
	return 0;
}
