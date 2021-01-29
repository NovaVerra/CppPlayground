#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::strlen;
using std::strcmp;
using std::strcpy;
using std::strcat;
using std::ostream;
using std::istream;

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
	MyString		&operator=(MyString &&rhs);

	// Copier
	MyString(const MyString &source);
	MyString		&operator=(const MyString &rhs);

	// Basic getters
	int				get_len() const;
	void			display_str() const;
	const char		*get_str() const;

	// Overloaders
	friend ostream	&operator<<(ostream &os, const MyString &rhs);
	friend istream	&operator>>(istream &is, MyString &rhs);
	bool			operator==(const MyString &rhs) const;
	bool			operator!=(const MyString &rhs) const;
	bool			operator<(const MyString &rhs) const;
	bool			operator>(const MyString &rhs) const;
	MyString		operator-(const MyString &rhs) const;
	MyString		operator+(const MyString &rhs) const;
	MyString		&operator+=(const MyString &rhs);
	MyString		operator*(size_t n) const;
	MyString		&operator*=(size_t n);
};

#endif
