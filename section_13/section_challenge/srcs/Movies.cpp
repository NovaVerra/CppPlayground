#include "../includes/section_challenge/Movies.h"

/*********************************
*          Constructors          *
*********************************/
Movies::Movies()
: movies {}
{}

/*********************************
*           Destructor           *
*********************************/
Movies::~Movies()
{}

/*********************************
*             Mover              *
*********************************/

/*********************************
*             Copier             *
*********************************/

/*********************************
*            Getters             *
*********************************/
void	Movies::display_movies()
{
	if (movies.size() == 0)
		cout << "No movie in database" << endl;
	else
		for (auto movie : movies)
			movie.display_movie();
}

/*********************************
*            Setters             *
*********************************/
bool	Movies::add_movie(string name_to_set, Rating rating_to_set, int view_count_to_set)
{
	for (const auto &movie : movies)
	{
		if (movie.get_name() == name_to_set)
		{
			cout << "Movie already exist in database" << endl;
			return false;
		}
	}
	cout << "Added movie to database" << endl;
	movies.push_back(Movie{name_to_set, rating_to_set, view_count_to_set});
	return true;
}

bool	Movies::increment_watched(string name_to_increment)
{
	for (auto &movie : movies)
	{
		if (movie.get_name() == name_to_increment)
		{
			movie.increment_view_count();
			return true;
		}
	}
	return false;
}

/*********************************
*          Overloaders           *
*********************************/
