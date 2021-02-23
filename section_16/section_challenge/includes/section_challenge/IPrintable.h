#ifndef _IPRINTABLE_H_
#define _IPRINTABLE_H_

#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class IPrintable
{
	friend ostream	&operator<<(ostream &os, const IPrintable &rhs);

public:
	virtual void	print(ostream &os) const = 0;
	virtual			~IPrintable() = default;
};

#endif
