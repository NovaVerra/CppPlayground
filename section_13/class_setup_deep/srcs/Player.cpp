#include "../includes/class_setup_shallow/Player.h"

/*********************************
*          Constructors          *
*********************************/
Player::Player(string name_to_set, int health_to_set, int xp_to_set)
{
	name = new string;
	health = new int;
	xp = new int;

	*name = name_to_set;
	*health = health_to_set;
	*xp = xp_to_set;
}

/*********************************
*           Destructor           *
*********************************/
Player::~Player()
{
	delete name;
	delete health;
	delete xp;
}

/*********************************
*             Mover              *
*********************************/
Player::Player(Player &&source) noexcept
: Player {*source.name, *source.health, *source.xp}
{
	source.name = nullptr;
	source.health = nullptr;
	source.xp = nullptr;
	cout << "Move Constructor executed" << endl;
}


/*********************************
*             Copier             *
*********************************/
Player::Player(const Player &source)
: Player {*source.name, *source.health, *source.xp}
{}

/*********************************
*            Getters             *
*********************************/
string	Player::get_name() const { return *name; }
int		Player::get_health() const { return *health; }
int		Player::get_xp() const { return *xp; }

/*********************************
*            Setters             *
*********************************/
void	Player::set_name(string name_to_set) { *name = name_to_set; }
void	Player::set_health(int health_to_set) { *health = health_to_set; }
void	Player::set_xp(int xp_to_set) { *xp = xp_to_set; }

/*********************************
*          Overloaders           *
*********************************/

