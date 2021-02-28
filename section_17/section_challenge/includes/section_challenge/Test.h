#ifndef _TEST_H_
#define _TEST_H_

class Test
{
private:
	int	data;

public:
	// Constructors
	Test();
	Test(int data_to_set);

	// Destructors
	~Test() = default;

	// Basic getters
	int		get_data();

	// Basic setters
	void	set_data(int data_to_set);
};

#endif
