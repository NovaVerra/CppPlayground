#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <cstring>
using std::strlen;
using std::strcpy;
using std::cout;
using std::endl;

class MyString
{
private:
	char	*str;

public:
	// Constructors
	MyString();
	MyString(const char *s);
	// Destructors
	~MyString();
	// Mover
	// Copier
	MyString(const MyString &source);
	// Basic getters
	const char	*get_str() const;
	int			get_len() const;
	void		display_str() const;
	// Basic setters
	// Overloaders
};

#endif
