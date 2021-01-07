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
void	print_menu();
void	print_list(vector<int> &vec);
void	add_number(vector<int> &vec);
void	calc_mean(vector<int> &vec);
void	find_min(vector<int> &vec);
void	find_max(vector<int> &vec);

#endif
