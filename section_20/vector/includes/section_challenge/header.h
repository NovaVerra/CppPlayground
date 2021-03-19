#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>		// std::cin | std::cout
#include <string>		// CPP-style string (objects)
#include <vector>		// std::vector
#include <algorithm>
#include <iomanip>		// setw() | setprecision()

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

/* Insert Function Prototypes Here */
void	test_00();
void	test_01();
void	test_02();
void	test_03();
void	test_04();
void	test_05();
void	test_06();
void	test_07();
void	test_08();
template <typename T>
void	display_template(const vector<T> &vec);
void	display_foreach(const vector<int> &vec);

#endif
