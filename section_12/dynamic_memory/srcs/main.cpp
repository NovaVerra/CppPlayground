#include "../includes/dynamic_memory/header.h"

int	main()
{
	dynamic_memory();
	return 0;
}

void	dynamic_memory()
{
	//	Dynamic Memory Allocation - Variable
	int	*ptr {nullptr};	// TODO free/delete memory
	ptr = new int;

	cout << "===== Before assigning value =====" << endl;
	cout << std::right << std::setw(9) << "Address: ";
	cout << ptr << endl;
	cout << std::right << std::setw(9) << "Value: ";
	cout << *ptr << endl << endl;

	*ptr = 100;

	cout << "===== After assigning value =====" << endl;
	cout << std::right << std::setw(9) << "Address: ";
	cout << ptr << endl;
	cout << std::right << std::setw(9) << "Value: ";
	cout << *ptr << endl << endl;

	delete ptr;

	//	Dynamic Memory Allocation - Array
	double	*array_ptr {nullptr};	// TODO free/delete memory
	size_t	size {5};
	array_ptr = new double[size];

	delete [] array_ptr;
}
