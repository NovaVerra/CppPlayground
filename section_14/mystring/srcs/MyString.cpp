#include "../includes/mystring/MyString.h"

/*********************************
*          Constructors          *
*********************************/
MyString::MyString()
: MyString {nullptr}
{}

MyString::MyString(const char *s)
: str {nullptr}
{
	if (s == nullptr)
	{
		str = new char[1];
		*str = '\0';
	}
	else
	{
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
	
}

/*********************************
*           Destructor           *
*********************************/
MyString::~MyString()
{
	delete [] str;
}

/*********************************
*             Mover              *
*********************************/

/*********************************
*             Copier             *
*********************************/
MyString::MyString(const MyString &source)
: MyString {source.str}
{}

/*********************************
*            Getters             *
*********************************/
const char	*MyString::get_str() const { return str; }
void		MyString::display_str() const { cout << str << endl; }
int			MyString::get_len() const { return strlen(str); }

/*********************************
*            Setters             *
*********************************/

/*********************************
*          Overloaders           *
*********************************/
