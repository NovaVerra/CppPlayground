#include "../includes/class_setup_shallow/header.h"
#include "../includes/class_setup_shallow/Player.h"

int	main()
{
	section_challenge();
	return 0;
}

void	display_player(Player p)
{
	cout << p.get_name() << ", " << p.get_health() << ", " << p.get_xp() << endl;
}

void	section_challenge()
{
	Player player01 {};
	display_player(player01);
}
