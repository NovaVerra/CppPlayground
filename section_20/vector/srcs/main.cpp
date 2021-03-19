#include "../includes/section_challenge/header.h"
#include "../includes/section_challenge/Person.h"

void	test_00()
{
	vector<int>	vec_00 {1, 2, 3, 4, 5};
	display_foreach(vec_00);

	vec_00 = {2, 4, 6, 8, 10};
	display_foreach(vec_00);

	vector<int>	vec_01 (10, 100);
	display_foreach(vec_01);
}

void	test_01()
{
	vector<int>	vec_00 {1, 2, 3, 4, 5};
	cout << "size of vector: " << vec_00.size() << endl;
	cout << "max size of vector: " << vec_00.max_size() << endl;
	cout << "capacity of vector: " << vec_00.capacity() << endl;

	cout << "-----------------------" << endl;
	cout << "push_back()" << endl;

	vec_00.push_back(6);
	cout << "size of vector: " << vec_00.size() << endl;
	cout << "max size of vector: " << vec_00.max_size() << endl;
	cout << "capacity of vector: " << vec_00.capacity() << endl;

	cout << "-----------------------" << endl;
	cout << "shrin_kto_fit()" << endl;

	vec_00.shrink_to_fit();
	cout << "size of vector: " << vec_00.size() << endl;
	cout << "max size of vector: " << vec_00.max_size() << endl;
	cout << "capacity of vector: " << vec_00.capacity() << endl;

	cout << "-----------------------" << endl;
	cout << "reserve()" << endl;

	vec_00.reserve(100);
	cout << "size of vector: " << vec_00.size() << endl;
	cout << "max size of vector: " << vec_00.max_size() << endl;
	cout << "capacity of vector: " << vec_00.capacity() << endl;
}

void	test_02()
{
	vector<int>	vec_00 {1, 2, 3, 4, 5};
	display_foreach(vec_00);
	vec_00[0] = 100;
	vec_00.at(1) = 200;
	display_foreach(vec_00);
}

void	test_03()
{
	vector<Person>	class_roster {};

	Person	p1 {"Amber", 15};
	class_roster.push_back(p1);
	display_template(class_roster);

	class_roster.push_back(Person{"Becky", 16});
	display_template(class_roster);

	class_roster.emplace_back("Charlie", 17);
	display_template(class_roster);
}

void	test_04()
{
	vector<Person>	class_roster
	{
		{"Amber", 15},
		{"Becky", 16},
		{"Charlie", 17}
	};

	display_template(class_roster);
	class_roster.pop_back();
	display_template(class_roster);
}

void	test_05()
{
	vector<int>	vec_00 {1, 2, 3, 4, 5};
	display_template(vec_00);

	vec_00.clear();
	display_template(vec_00);

	vec_00 = {1, 2, 3, 4, 5};
	display_template(vec_00);

	vec_00.erase(vec_00.begin(), vec_00.begin() + 2);
	display_template(vec_00);

	vec_00 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	auto it = vec_00.begin();
	while (it != vec_00.end())
	{
		if (*it % 2 == 0)
			vec_00.erase(it);
		else
			it++;
	}
	display_template(vec_00);
}

void	test_06()
{
	vector<int>	vec_00 {1, 2, 3, 4, 5};
	vector<int>	vec_01 {10, 20};
	display_template(vec_00);
	display_template(vec_01);

	std::copy(vec_00.begin(), vec_00.end(), std::back_inserter(vec_01));
	display_template(vec_00);
	display_template(vec_01);

	vec_00 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vec_01 = {10, 20};
	std::copy_if(vec_00.begin(), vec_00.end(), std::back_inserter(vec_01), [] (int x)
	{
		return (x % 2 != 0);
	});
	display_template(vec_00);
	display_template(vec_01);
}

void	test_07()
{
	vector<int>	vec_00 {1, 2, 3, 4, 5};
	vector<int>	vec_01 {10, 20, 30, 40, 50};
	vector<int>	vec_02 {};

	std::transform(vec_00.begin(), vec_00.end(), vec_01.begin(), std::back_inserter(vec_02), [] (int x, int y)
	{
		return (x * y);
	});
	display_template(vec_02);
}

void	test_08()
{
	vector<int>	vec_00 {1, 2, 3, 4, 5};
	vector<int>	vec_01 {10, 20, 30, 40, 50};

	display_template(vec_00);
	display_template(vec_01);

	auto it = std::find(vec_01.begin(), vec_01.end(), 30);
	if (it != vec_00.end())
	{
		vec_01.insert(it, vec_00.begin(), vec_00.end());
	}
	display_template(vec_00);
	display_template(vec_01);
}

template <typename T>
void	display_template(const vector<T> &vec)
{
	cout << "[ | ";
	for (const auto &v : vec)
		cout << v << " | ";
	cout << "]" << endl;
}

void	display_foreach(const vector<int> &vec)
{
	cout << "[ ";
	std::for_each(vec.begin(), vec.end(), [] (int x) {cout << x << " ";});
	cout << "]" << endl;
}

int	main()
{
	// test_00();
	// test_01();
	// test_02();
	// test_03();
	// test_04();
	// test_05();
	// test_06();
	// test_07();
	test_08();
	return 0;
}
