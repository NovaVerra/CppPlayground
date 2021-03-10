#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>		// std::cin | std::cout
#include <string>		// CPP-style string (objects)
#include <vector>		// std::vector
#include <iomanip>		// setw() | setprecision()
#include <fstream>		// file stream

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ostream;
using std::istream;
using std::ifstream;

/* Insert Function Prototypes Here */
int	check_answer(string answer_key, string student_answer);

#endif
