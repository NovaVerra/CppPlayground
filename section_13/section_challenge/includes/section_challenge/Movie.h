#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
using std::string;

enum	Rating{ G, PG, PG13, R };

class Movie
{
private:
	string	name;
	Rating	rating;
	int		view_count;

public:
	// Constructors
	Movie(string name_to_set = "Placeholder", Rating rating_to_set = G, int view_count_to_set = 0);

	// Destructors
	~Movie();

	// Mover

	// Copier
	Movie(const Movie &source);

	// Basic getters
	string	get_name() const;
	Rating	get_rating() const;
	int		get_view_count() const;

	// Basic setters
	void	set_name(string name_to_set);
	void	set_rating(Rating rating_to_set);
	void	set_view_count(int view_count_to_set);

	// Overloaders
};

#endif
