#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>		// std::cin | std::cout
#include <string>		// CPP-style string (objects)
#include <iomanip>		// setw() | setprecision()
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::size;

using std::setw;
using std::setfill;
using std::left;
using std::right;
using std::fixed;
using std::setprecision;

#define	COUNTRY_WIDTH	12
#define	CITY_WIDTH		12
#define	POP_WIDTH		12
#define	COST_WIDTH		12
#define HEADER_WIDTH	48

struct	City
{
	string			name;
	long			population;
	double			cost;
};

struct	Country
{
	string			name;
	vector<City>	cities;
};

struct	Tours
{
	string			title;
	vector<Country>	countries;
};

/* Insert Function Prototypes Here */
void	display_header(const Tours &tours);
void	display_info(const Tours &tours);
void	display_country(const Country &country);
void	display_city(const City &city);

#endif
