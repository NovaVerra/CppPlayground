#include "../includes/section_challenge/header.h"

int	main()
{
	section_challenge();
	return 0;
}

void	display(MyString str)
{
	str.display_str();
}

void	section_challenge()
{
	MyString	str1 {};		// constructor ()
	MyString	str2 {"Frank"};	// constructor (const char *s)
	// MyString	str3 {str2};

	str1 = str2;				// overloaded copier
	str1 = MyString {"Bobby"};	// overloaded mover
	display(str1);				// standard mover
}
