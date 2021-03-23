#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>		// std::cin | std::cout
#include <string>		// CPP-style string (objects)
#include <map>
#include <set>

template <typename T1, typename T2>
void	display(const std::map<T1, T2> &map);
void	display(const std::map<std::string, std::set<int>> &map);
void	test_00();
void	test_01();

#endif
