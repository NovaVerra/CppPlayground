#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>

class Person
{
private:
	std::string	name;
	int			age;

public:
	Person() = default;
	Person(std::string init_name, int init_age) : name {init_name}, age {init_age}
	{}
	bool	operator<(const Person &rhs) const
	{
		return (this->age < rhs.age);
	}
	bool	operator==(const Person &rhs) const
	{
		return ((this->age == rhs.age) && (this->name == rhs.name));
	}
	std::string	get_name() { return name; }

	friend std::ostream	&operator<<(std::ostream &os, const Person &obj)
	{
		os << obj.name << ": " << obj.age;
		return os;
	}
};

#endif
