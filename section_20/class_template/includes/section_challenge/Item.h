#ifndef _ITEM_H_
#define _ITEM_H_

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename T>
class Item
{
private:
	string	name {};
	T		value {};

public:
	Item(string name_to_set, T value_to_set) : name {name_to_set}, value {value_to_set}
	{}
	~Item() = default;

	string	get_name() const { return name; }
	T		get_value() const { return value; }
};

template <typename T1, typename T2>
struct my_pair
{
	T1	first;
	T2	second;
};

#endif
