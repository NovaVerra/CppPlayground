#include "../includes/class_setup_shallow/Player.h"

/*********************************
*          Constructors          *
*********************************/
Player::Player(string name_to_set, int health_to_set, int xp_to_set)
: name {name_to_set}, health {health_to_set}, xp {xp_to_set}
{
	cout << name << ", " << health << ", " << xp << endl;
	cout << "all-args constructor" << endl;
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
Player::Player(const Player &source)
: Player {source.name, source.health, source.xp}
{
	cout << "Copy constructor called" << endl;
}

/*********************************
*            Getters             *
*********************************/
string	Player::get_name() const { return name; }
int		Player::get_health() const { return health; }
int		Player::get_xp() const { return xp; }

/*********************************
*            Setters             *
*********************************/
void	Player::set_name(string name_to_set) { name = name_to_set; }
void	Player::set_health(int health_to_set) { health = health_to_set; }
void	Player::set_xp(int xp_to_set) { xp = xp_to_set; }

/*********************************
*          Overloaders           *
*********************************/

