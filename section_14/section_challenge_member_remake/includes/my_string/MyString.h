#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::strlen;
using std::strcpy;
using std::strcat;
using std::strcmp;
using std::ostream;
using std::istream;

class MyString
{
private:
	char	*str;

public:
	// Constructors
	MyString();								// tested
	MyString(const char *s);				// tested

	// Destructors
	~MyString();							// tested

	// Mover
	MyString(MyString &&source);			// tested with vector

	// Copier
	MyString(const MyString &source);		// tested
	
	// Basic getters
	int				get_len() const;		// tested
	void			display_str() const;	// tested
	const char		*get_str() const;		// tested

	// Overloaders
	friend ostream	&operator<<(ostream &os, const MyString &rhs);	// tested
	friend istream	&operator>>(istream &is, MyString &rhs);		// tested
	MyString		&operator=(const MyString &rhs);				// tested
	MyString		&operator=(MyString &&rhs);						// tested
	MyString		operator-() const;								// tested
	MyString		operator+(const MyString &rhs) const;			// tested
	MyString		&operator+=(const MyString &rhs);				// tested
	MyString		operator*(int n) const;
	MyString		&operator*=(int n);
	bool			operator==(const MyString &rhs) const;			// tested
	bool			operator!=(const MyString &rhs) const;			// tested
	bool			operator<(const MyString &rhs) const;			// tested
	bool			operator>(const MyString &rhs) const;			// tested
};

#endif
