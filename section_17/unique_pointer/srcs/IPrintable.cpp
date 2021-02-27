#include "../includes/section_challenge/IPrintable.h"

ostream	&operator<<(ostream &os, const IPrintable &rhs)
{
	rhs.print(os);
	return os;
}
