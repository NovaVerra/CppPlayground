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
	Player();
	Player(string name_to_set);
	Player(string name_to_set, int health_to_set);
	Player(string name_to_set, int health_to_set, int xp);
	// Destructors
	~Player();
	// Mover
	// Copier
	// Basic getters
	string	get_name();
	int		get_health();
	int		get_xp();
	// Basic setters
	bool	set_name(string name_to_set);
	bool	set_health(int health_to_set);
	bool	set_xp(int xp_to_set);
	// Overloaders
};

#endif
