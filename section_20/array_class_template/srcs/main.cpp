#include "../includes/section_challenge/header.h"
#include "../includes/section_challenge/Array.h"

int	main()
{
	Array<string, 5> arr {"Frank"};
	cout << arr << endl;
	arr.fill("Frank");
	cout << arr << endl;
	return 0;
}
