#include "../includes/section_challenge/Test.h"

/*********************************
*          Constructors          *
*********************************/
Test::Test()
: Test {0}
{}

Test::Test(int data_to_set)
: data {data_to_set}
{}

/*********************************
*            Getters             *
*********************************/
int		Test::get_data() { return data; }

/*********************************
*            Getters             *
*********************************/
void	Test::set_data(int data_to_set)
{
	data = data_to_set;
}
