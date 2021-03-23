#include "../includes/section_challenge/header.h"
#include "../includes/section_challenge/Song.h"

void	display_menu()
{
	std::cout << "==============================================" << std::endl;
	std::cout << "F - Play First Song" << std::endl;
	std::cout << "N - Next Song" << std::endl;
	std::cout << "P - Previous Song" << std::endl;
	std::cout << "A - Add Song" << std::endl;
	std::cout << "L - List Current Song" << std::endl;
	std::cout << "Q - Quit" << std::endl;
	std::cout << "Please enter command: ";
}

void	display_playlist(std::list<Song> playlist, std::list<Song>::iterator &it)
{
	std::cout << std::setw(20) << std::left << "Song Name";
	std::cout << std::setw(20) << std::left << "Artist Name";
	std::cout << std::setw(6) << std::right << "Rating" << std::endl;
	std::cout << std::setw(46) << std::setfill('=') << "" << std::endl;
	for (auto elem : playlist)
		std::cout << std::setfill(' ') << elem << std::endl;
	std::cout << "\nNow playing: \n" << *it << std::endl;
}

int	main()
{
	std::string	name;
	std::string	artist;
	int			rating;
	std::list<Song>	playlist
	{
		{"In Your Arms", "Saib", 5},
		{"Egyptian Pool", "Jinsang", 5},
		{"Affection", "Jinsang", 5}
	};

	auto	it = playlist.begin();
	display_playlist(playlist, it);

	char	input = {};
	do
	{
		display_menu();
		std::cin >> input;
		input = toupper(input);
		switch (input)
		{
			case 'F':
				it = playlist.begin();
				std::cout << "\nNow playing: \n" << *it << std::endl;
				break;
			case 'N':
				std::advance(it, 1);
				if (it == playlist.end())
					it = playlist.begin();
				std::cout << "\nNow playing: \n" << *it << std::endl;
				break;
			case 'P':
				if (it == playlist.begin())
					it = playlist.end();
				std::advance(it, -1);
				std::cout << "\nNow playing: \n" << *it << std::endl;
				break;	
			case 'A':
				std::cin.clear();
				std::cin.ignore();
				std::cout << "\nEnter song name: ";
				std::getline(std::cin, name);
				std::cout << "\nEnter artist name: ";
				std::getline(std::cin, artist);
				std::cout << "\nEnter rating: ";
				std::cin >> rating;
				playlist.emplace_back(name, artist, rating);
				break;
			case 'L':
				display_playlist(playlist, it);
				break;
			case 'Q':
				std::cout << "Bye bye!" << std::endl;
				break;
			default:
				std::cerr << "\nInvalid option" << std::endl;
				break;
		}
	} while (input != 'Q');

	return 0;
}
