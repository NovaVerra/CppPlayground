#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>		// std::cin | std::cout
#include <string>		// CPP-style string (objects)
#include <vector>		// std::vector
#include <iomanip>		// setw() | setprecision()

#include "./Player.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ostream;
using std::istream;
using std::fstream;

void	section_challenge();
void	display_player(Player p);

#endif
