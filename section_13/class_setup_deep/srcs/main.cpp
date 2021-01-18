#include "../includes/class_setup_shallow/header.h"
#include "../includes/class_setup_shallow/Player.h"

int	main()
{
	section_challenge();
	return 0;
}

void	display_player(Player &p)
{
	cout << p.get_name() << ", " << p.get_health() << ", " << p.get_xp() << endl;
}

void	display_num_of_players(Player &p)
{
	cout << p.get_num_of_players() << endl;
}

void	section_challenge()
{
	vector<Player> players;

	players.push_back(Player {"Leo", 100, 10});
	players.push_back(Player {"Spat", 80, 0});
	players.push_back(Player {"Poop", 90, 0});
	display_num_of_players(players.at(0));
}
