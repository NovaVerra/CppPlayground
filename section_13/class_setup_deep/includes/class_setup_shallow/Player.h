#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Player
{
private:
	string	name;
	int		health;
	int		xp;

public:
	// Constructors
	Player(string name_to_set = "Player", int health_to_set = 100, int xp = 0);
	
	// Destructors
	~Player();

	// Mover

	// Copier
	Player(const Player &source);

	// Basic getters
	string	get_name();
	int		get_health();
	int		get_xp();
	
	// Basic setters
	void	set_name(string name_to_set);
	void	set_health(int health_to_set);
	void	set_xp(int xp_to_set);

	// Overloaders
};

#endif
