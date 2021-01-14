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
	// Basic setters
	// Overloaders
};

#endif
