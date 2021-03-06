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
	cout << right << std::setw(HEADER_WIDTH / 2 + HEADER_WIDTH / 7) << tours.title << endl;

	cout << std::setw(HEADER_WIDTH) << std::setfill('=') << "" << endl;
	cout << setfill(' ');

	cout << left << setw(COUNTRY_WIDTH) << "Country";
	cout << left << setw(CITY_WIDTH) << "City";
	cout << right << setw(POP_WIDTH) << "Population";
	cout << right << setw(COST_WIDTH) << "Cost" << endl;

	cout << std::setw(HEADER_WIDTH) << std::setfill('-') << "" << endl;
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
			cout << std::setw(COUNTRY_WIDTH) << std::setfill(' ') << "";
		display_city(city);
		counter++;
	};
	cout << endl;
}

void	display_city(const City &city)
{
	cout << left << setw(CITY_WIDTH) << city.name;
	cout << right << setw(POP_WIDTH) << city.population;
	cout << right << fixed << setprecision(2) << setw(COST_WIDTH) << city.cost << endl;
}
