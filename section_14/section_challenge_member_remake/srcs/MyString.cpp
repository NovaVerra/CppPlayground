#include "../includes/my_string/MyString.h"

/*********************************
*          Constructors          *
*********************************/
MyString::MyString()
: MyString {nullptr}
{ cout << "Function Executed - no args constructor" << endl; }

MyString::MyString(const char *s)
{
	cout << "Function Executed - args constructor" << endl;
	if (s == nullptr)
	{
		str = new char [1];
		*str = '\0';
	}
	else
	{
		str = new char [strlen(s) + 1];
		strcpy(str, s);
	}
}

/*********************************
*           Destructor           *
*********************************/
MyString::~MyString()
{ 
	cout << "Function Executed - destructor" << endl;
	delete [] str;
}

/*********************************
*             Mover              *
*********************************/
MyString::MyString(MyString &&source)
{
	cout << "Function Executed - move constructor" << endl;
	str = source.str;
	source.str = nullptr;
}

/*********************************
*             Copier             *
*********************************/
MyString::MyString(const MyString &source)
: MyString {source.str}
{ cout << "Function Executed - copy constructor" << endl; }

/*********************************
*            Getters             *
*********************************/
int			MyString::get_len() const { return strlen(str); }
void		MyString::display_str() const { cout << str << endl; }
const char	*MyString::get_str() const { return str; }

/*********************************
*          Overloaders           *
*********************************/
ostream		&operator<<(ostream &os, const MyString &rhs)
{
	os << rhs.str;
	return os;
}

istream		&operator>>(istream &is, MyString &rhs)
{
	char	*buff {new char [1000]};
	is >> buff;
	rhs = MyString {buff};
	delete [] buff;
	return is;
}

MyString	&MyString::operator=(const MyString &rhs)
{
	cout << "Function Executed - overloaded assignment operator (copy)" << endl;
	if (this == &rhs)
		return *this;
	delete [] str;
	str = new char [strlen(rhs.str) + 1];
	strcpy(str, rhs.str);
	return *this;
}

MyString	&MyString::operator=(MyString &&rhs)
{
	cout << "Function Executed - overloaded assignment operator (move)" << endl;
	if (this == &rhs)
		return *this;
	delete [] str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

MyString	MyString::operator-() const
{
	char	*buff {new char [strlen(str) + 1]};
	strcpy(buff, str);
	for (size_t i {0}; i < strlen(buff); i++)
		buff[i] = tolower(buff[i]);
	MyString res {buff};
	delete [] buff;
	return res;
}

MyString	MyString::operator+(const MyString &rhs) const
{
	char	*buff {new char [strlen(str) + strlen(rhs.str) + 1]};
	strcpy(buff, str);
	strcat(buff, rhs.str);
	MyString res {buff};
	delete [] buff;
	return res;
}

MyString	&MyString::operator+=(const MyString &rhs)
{
	*this = *this + rhs;
	return *this;
}

MyString	MyString::operator*(size_t n) const
{
	MyString res {};
	for (size_t i {0}; i < n; i++)
		res += *this;
	return res;
}

MyString	&MyString::operator*=(size_t n)
{
	*this = *this * n;
	return *this;
}

bool		MyString::operator==(const MyString &rhs) const
{
	return (strcmp(str, rhs.str) == 0);
}

bool		MyString::operator!=(const MyString &rhs) const
{
	return !(strcmp(str, rhs.str) == 0);
}

bool		MyString::operator<(const MyString &rhs) const
{
	return (strcmp(str, rhs.str) < 0);
}

bool		MyString::operator>(const MyString &rhs) const
{
	return (strcmp(str, rhs.str) > 0);
}
