#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::ostream;

template <typename T, int N>
class Array
{
private:
	int	size[N];
	T	value[N];

public:
	// Constructors
	Array() = default;
	Array(T init_value) : value {init_value}
	{}

	// Destructors
	~Array() = default;

	// Setters
	void	fill(T fill_value)
	{
		for (auto &elem : value)
			elem = fill_value;
	}

	// Getters
	int		get_size() const { return size; }

	// Overloaders
	friend ostream	&operator<<(ostream &os, const Array &obj)
	{
		os << "[ ";
		for (auto &elem : obj.value)
			os << elem << " ";
		os << "]" << endl;
		return os;
	}
	T				&operator[](int index)
	{
		return value[index];
	}
};

#endif
