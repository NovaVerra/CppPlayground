#include "../includes/class_setup/Player.h"

/*********************************
*          Constructors          *
*********************************/
Player::Player()
{
	cout << "Default constructor" << endl;
}
Player::Player(string name_to_set)
{
	cout << name_to_set << endl;
	cout << "Name constructor" << endl;
}
Player::Player(string name_to_set, int health_to_set)
{
	cout << name_to_set << endl;
	cout << health_to_set << endl;
	cout << "Name and Health constructor" << endl;
}
Player::Player(string name_to_set, int health_to_set, int xp)
{
	cout << name_to_set << endl;
	cout << health_to_set << endl;
	cout << xp << endl;
	cout << "Name and Health and XP constructor" << endl;
}


/*********************************
*           Destructor           *
*********************************/
Player::~Player()
{
	cout << "Destructor called" << endl;
}


/*********************************
*             Mover              *
*********************************/



/*********************************
*             Copier             *
*********************************/



/*********************************
*            Getters             *
*********************************/



/*********************************
*            Setters             *
*********************************/



/*********************************
*          Overloaders           *
*********************************/

