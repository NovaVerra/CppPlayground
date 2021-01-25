#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;
using std::istream;
using std::strlen;
using std::tolower;
using std::strcmp;

class	MyString
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
	int			get_len() const;
	const char	*get_str() const;
	void		display_str() const;

	// Overloaders
	friend	ostream &operator<<(ostream &os, const MyString &rhs);
	friend	istream &operator>>(istream &is, MyString &rhs);
	MyString		&operator=(const MyString &rhs);
	MyString		&operator=(MyString &&rhs);
	MyString		operator-() const;
	bool			operator==(const MyString &rhs) const;
	bool			operator!=(const MyString &rhs) const;
	bool			operator<(const MyString &rhs) const;
	bool			operator>(const MyString &rhs) const;
	MyString		operator+(const MyString &rhs) const;
	MyString		&operator+=(const MyString &rhs);
	MyString		operator*(size_t n);
	MyString		&operator*=(size_t n);
	MyString		&operator++();
	MyString		operator++(int);
};

#endif
