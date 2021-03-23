#ifndef _SONG_H_
#define _SONG_H_

#include <string>
#include <iostream>
#include <iomanip>

class Song
{
private:
	std::string	name;
	std::string	artist;
	int			rating;

public:
	// Constructors
	Song() = default;
	Song(std::string init_name, std::string init_artist, int init_rating)
	: name {init_name}, artist {init_artist}, rating {init_rating}
	{}

	// Destructors
	~Song() = default;

	// Basic getters
	std::string	get_song() const { return name; }
	std::string	get_artist() const { return artist; }
	int			get_rating() const { return rating; }

	// Basic setters
	void		set_song(std::string re_name ) { name = re_name; }
	void		set_artist(std::string re_artist) { artist = re_artist; }
	void		set_rating(int re_rating) { rating = re_rating; }

	// Overloaders
	bool				operator<(const Song &rhs) const
	{
		return this->rating < rhs.rating;
	}
	bool				operator==(const Song &rhs) const
	{
		return this->artist == rhs.artist;
	}
	friend std::ostream	&operator<<(std::ostream &os, const Song &obj)
	{
		os << std::setw(20) << std::left << obj.name;
		os << std::setw(20) << std::left << obj.artist;
		os << std::setw(6) << std::right << obj.rating;
		return os;
	}
};

#endif
