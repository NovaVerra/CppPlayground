#include "../includes/class_setup/header.h"
#include "../includes/class_setup/Player.h"

int	main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	// Player player_01 {};
	// Player player_02 {"Frank"};
	// Player player_03 {"Frank", 100};
	// Player player_04 {"Frank", 100, 10};

	Player *player_05 {new Player ("Leo", 100, 10)};
	delete player_05;
}
