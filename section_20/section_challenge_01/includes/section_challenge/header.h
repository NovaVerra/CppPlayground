#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>		// std::cin | std::cout
#include <iomanip>
#include <list>
#include <cctype>
#include "./Song.h"

void	display_menu();
void	display_playlist(std::list<Song> playlist);

#endif
