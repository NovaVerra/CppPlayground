#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>		// std::cin | std::cout
#include <string>		// CPP-style string (objects)
#include <vector>		// std::vector
#include <iomanip>		// setw() | setprecision()
#include <algorithm>	// http://www.cplusplus.com/reference/algorithm/
#include <deque>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::deque;
using std::array;

/* Insert Function Prototypes Here */
template <typename T>
void	display(const deque<T> &deq);
void	test_00();
void	test_01();
void	test_02();
void	test_03();
void	test_04();
void	test_05();

#endif
