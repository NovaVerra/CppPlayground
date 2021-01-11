#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>		// std::cin | std::cout
#include <string>		// CPP-style string (objects)
#include <vector>		// std::vector
#include <cctype>		// testing and converting libraries (isalpha, isnum, isprint, etc...)

using std::cout;
using std::cin;	
using std::endl;
using std::string;
using std::vector;

void	section_challenge();
void	print_array(const int *const array, size_t array_size);
int		*apply_all(int array_1[], size_t array_1_size, int array_2[], size_t array_2_size);

#endif
