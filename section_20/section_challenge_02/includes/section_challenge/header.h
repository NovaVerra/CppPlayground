#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>		// std::cin | std::cout
#include <string>		// CPP-style string (objects)
#include <fstream>
#include <map>
#include <set>
#include <vector>
#include <sstream>		// string stream
#include <cctype>

std::string					clean_string(std::string str);
void						display(const std::map<std::string, std::set<int>> &m);
void						display(const std::map<std::string, int> &m);
void						section_00();
void						section_01();


#endif
