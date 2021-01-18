#include "../includes/section_challenge/Movie.h"

/*********************************
*          Constructors          *
*********************************/
Movie::Movie(string name_to_set, Rating rating_to_set, int view_count_to_set)
: name {name_to_set}, rating {rating_to_set}, view_count {view_count_to_set}
{}

/*********************************
*           Destructor           *
*********************************/
Movie::~Movie()
{}

/*********************************
*             Mover              *
*********************************/

/*********************************
*             Copier             *
*********************************/
Movie::Movie(const Movie &source)
: Movie {source.name, source.rating, source.view_count}
{}

/*********************************
*            Getters             *
*********************************/
string	Movie::get_name() const { return name; }
Rating	Movie::get_rating() const { return rating; }
int		Movie::get_view_count() const { return view_count; }
void	Movie::display_movie() const
{
	cout << name << ", ";
	switch (rating)
	{
		case 0:
			cout << "G";
			break;
		case 1:
			cout << "PG";
			break;
		case 2:
			cout << "PG-13";
			break;
		case 3:
			cout << "R";
			break;
		default:
			cout << "Rating Error";
	}
	cout << ", " << view_count << endl;
}

/*********************************
*            Setters             *
*********************************/
void	Movie::set_name(string name_to_set) { name = name_to_set; }
void	Movie::set_rating(Rating rating_to_set) { rating = rating_to_set; }
void	Movie::set_view_count(int view_count_to_set) { view_count = view_count_to_set; }
void	Movie::increment_view_count() { ++view_count; }

/*********************************
*          Overloaders           *
*********************************/
