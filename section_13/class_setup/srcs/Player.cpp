#include "../includes/class_setup/Player.h"

/*********************************
*          Constructors          *
*********************************/
Player::Player(string name_to_set, int health_to_set, int xp_to_set)
: name {name_to_set}, health {health_to_set}, xp {xp_to_set}
{
	cout << name << endl;
	cout << health << endl;
	cout << xp << endl;
}

Player::Player()
: Player {"None", 100, 0}
{
	cout << name << endl;
	cout << health << endl;
	cout << xp << endl;
}

Player::Player(string name_to_set)
: Player {name_to_set, 100, 0}
{
	cout << name << endl;
	cout << health << endl;
	cout << xp << endl;
}

/*********************************
*           Destructor           *
*********************************/
Player::~Player() {}

/*********************************
*             Mover              *
*********************************/



/*********************************
*             Copier             *
*********************************/



/*********************************
*            Getters             *
*********************************/
string	Player::get_name() { return name; }
int		Player::get_health() { return health; }
int		Player::get_xp() { return xp; }

/*********************************
*            Setters             *
*********************************/
void	Player::set_name(string name_to_set) { name = name_to_set; }
void	Player::set_health(int health_to_set) { health = health_to_set; }
void	Player::set_xp(int xp_to_set) { xp = xp_to_set; }

/*********************************
*          Overloaders           *
*********************************/

