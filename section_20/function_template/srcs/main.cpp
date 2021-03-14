#include "../includes/section_challenge/header.h"

template <typename T>
T		max(T a, T b)
{
	return (a > b) ? a : b;
}

template <typename T1, typename T2>
void	func(T1 a, T2 b)
{
	cout << a << " " << b << endl;
}

struct Person
{
	string	name;
	int		age;
	bool	operator<(const Person &rhs) const
	{
		return this->age < rhs.age;
	}
	bool	operator>(const Person &rhs) const
	{
		return this->age > rhs.age;
	}
};

ostream	&operator<<(ostream &os, const Person &obj)
{
	os << obj.name << ": " << obj.age << endl;
	return os;
}

int		main()
{
	int	a {3};
	int	b {5};

	double	c {10.2};
	double	d {20.5};

	if (max<int>(a, b))
		cout << "A is bigger than B" << endl;
	else
		cout << "A is smaller than B" << endl;

	if (max<double>(c, d))
		cout << "C is bigger than D" << endl;
	else
		cout << "C is smaller than D" << endl;

	func<int, double>(a, d);

	Person	p1 {"Amy", 25};
	Person	p2 {"Becky", 30};

	Person p3 = max<Person>(p1, p2);

	cout << p3 << endl;

	return 0;
}
