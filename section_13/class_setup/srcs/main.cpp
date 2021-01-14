#include "../includes/class_setup/header.h"
#include "../includes/class_setup/Player.h"

int	main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	Player *player_01 {new Player ("Leo", 100, 10)};
	delete player_01;
}
