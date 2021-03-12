#include "../includes/section_challenge/header.h"

int	main()
{
	string			name {};
	int				age {0};
	int				weight {0};
	int				height {0};
	string			info {"Leo    23    200   185"};
	istringstream	iss {info};
	ostringstream	oss {};

	iss >> name >> age >> weight >> height;
	cout << name << " - " << age << " - " << weight << " - " << height << endl;

	oss << name << " - " << age << " - " << weight << " - " << height;
	cout << "\n" << oss.str();


	return 0;
}
