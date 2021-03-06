#include "../includes/section_challenge/header.h"

int	main()
{
	Tours tours
	{
		"Asian Package",
		{
			{
				"Taiwan",
				{
					{ "Taipei", 125'000, 2'500 },
					{ "Hualien", 100'000, 2'000 },
					{ "KaoHsiung", 150'000, 3'000 }
				}
			},
			{
				"China",
				{
					{ "Shanghai", 200'000, 3'000 },
					{ "BeiJing", 350'000, 4'000 },
					{ "ShenZheng", 350'000, 4'500 }
				}
			},
			{
				"Japan",
				{
					{ "Tokyo", 350'000, 5'000 },
					{ "Kyoto", 125'000, 2'750 },
					{ "Osaka", 75'000, 3'550 }
				}
			}
		}
	};
	display_header(tours);
	display_info(tours);
	return 0;
}

void	display_header(const Tours &tours)
{
	cout << tours.title << endl;
	cout << std::setw(47) << std::setfill('=') << "" << endl;
	cout << setfill(' ');
	cout << left << setw(12) << "Country";
	cout << left << setw(12) << "City";
	cout << left << setw(15) << "Population";
	cout << left << setw(12) << "Cost" << endl;
	cout << std::setw(47) << std::setfill('-') << "" << endl;
	cout << setfill(' ');
}

void	display_info(const Tours &tours)
{
	for (auto country : tours.countries)
		display_country(country);
	return ;
}

void	display_country(const Country &country)
{
	int counter {0};
	cout << left << setw(12) << country.name;
	for (auto city : country.cities)
	{
		if (counter != 0)
			cout << std::setw(12) << std::setfill(' ') << "";
		display_city(city);
		counter++;
	};
	cout << endl;
}

void	display_city(const City &city)
{
	cout << left << setw(12) << city.name;
	cout << left << setw(15) << city.population;
	cout << "$";
	cout << left << fixed << setprecision(2) << setw(12) << city.cost << endl;
}
