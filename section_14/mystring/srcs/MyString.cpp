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
MyString::MyString(MyString &&source) noexcept
: MyString {source.str}
{
	source.str = nullptr;
}

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
MyString		&MyString::operator=(const MyString &rhs)
{
	if (this == &rhs)
		return *this;
	delete [] str;
	str = new char [strlen(rhs.str) + 1];
	strcpy(str, rhs.str);
	return *this;
}

MyString		&MyString::operator=(MyString &&rhs)
{
	if (this == &rhs)
		return *this;
	delete [] str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

MyString		MyString::operator-() const
{
	char	*buff {new char [strlen(str) + 1]};
	strcpy(buff, str);
	for (size_t i {0}; i < strlen(str); i++)
		buff[i] = tolower(buff[i]);
	MyString temp {buff};
	delete [] buff;
	return temp;
}

bool			MyString::operator==(const MyString &rhs) const
{
	if (strcmp(str, rhs.str) == 0)
		return true;
	else
		return false;
}

MyString		MyString::operator+(const MyString &rhs) const
{
	char	*buff {new char [strlen(str) + strlen(rhs.str) + 1]};
	strcpy(buff, str);
	strcat(buff, rhs.str);
	MyString temp {buff};
	delete [] buff;
	return temp;
}

ostream	&operator<<(ostream os, const MyString &rhs)
{
	os << rhs.str;
	return os;
}

istream	&operator>>(istream is, MyString &rhs)
{
	char	*buff {new char [1000]};
	is >> buff;
	rhs = MyString {buff};
	delete [] buff;
	return is;
}
