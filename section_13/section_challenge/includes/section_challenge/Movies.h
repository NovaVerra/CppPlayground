#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "./Movie.h"
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

class Movies
{
private:
	vector<Movie> movies;

public:
	// Constructors
	Movies();

	// Destructors
	~Movies();

	// Mover

	// Copier

	// Basic getters
	void display_movies();

	// Basic setters
	bool	add_movie(string name_to_set, Rating rating_to_set, int view_count_to_set);
	bool	increment_watched(string name_to_increment);

	// Overloaders
};

#endif
