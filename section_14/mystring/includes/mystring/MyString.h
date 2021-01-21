#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <iomanip>
#include <cstring>
using std::strlen;
using std::strcpy;
using std::cout;
using std::endl;
using std::tolower;

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
	MyString(MyString &&source) noexcept;

	// Copier
	MyString(const MyString &source);

	// Basic getters
	const char	*get_str() const;
	int			get_len() const;
	void		display_str() const;

	// Basic setters

	// Overloaded Constructor
	MyString	&operator=(const MyString &rhs);	// Copy
	MyString	&operator=(MyString &&rhs);		// Move
	MyString	operator-() const;
	bool		operator==(const MyString &rhs) const;
	MyString	operator+(const MyString &rhs) const;
};

#endif
