#include "../includes/section_challenge/IllegalBalanceException.h"

const char*	IllegalBalanceException::what() const noexcept
{
	return "Illegal balance exception";
}
