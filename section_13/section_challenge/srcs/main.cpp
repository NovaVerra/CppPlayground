#include "../includes/section_challenge/header.h"
#include "../includes/section_challenge/Movie.h"
#include "../includes/section_challenge/Movies.h"

int		main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	Movies my_movies;

	my_movies.display_movies();
	my_movies.add_movie("Movie A", G, 0);
	my_movies.display_movies();
}
