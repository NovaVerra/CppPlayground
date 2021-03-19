#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>
#include <list>
#include <cctype>
#include <algorithm>

using std::string;
using std::ostream;

class Person
{
private:
	string	name;
	int		age;

public:
	Person() = default;
	Person(string init_name, int init_age) : name {init_name}, age {init_age}
	{}
	bool	operator<(const Person &rhs) const
	{
		return (this->age < rhs.age);
	}
	bool	operator==(const Person &rhs) const
	{
		return ((this->age == rhs.age) && (this->name == rhs.name));
	}
	string	get_name() { return name; }

	friend ostream	&operator<<(ostream &os, const Person &obj)
	{
		os << obj.name << ": " << obj.age;
		return os;
	}
};

#endif
