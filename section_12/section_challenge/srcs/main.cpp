#include "../includes/section_challenge/header.h"

int	main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	//	Store result here
	int				*result {nullptr};

	//	Setting up the two arrays
	constexpr size_t	array_1_size {5};
	constexpr size_t	array_2_size {3};
	constexpr size_t	result_size {array_1_size * array_2_size};
	int					*array_1 {new int [array_1_size]};
	int					*array_2 {new int [array_2_size]};
	for (size_t i {0}; i < array_1_size; i++)
		*(array_1 + i) = i + 1;
	for (size_t i {0}; i < array_2_size; i++)
		*(array_2 + i) = (i + 1) * 10;

	//	Print Arrays
	cout << "Array 1: ";
	print_array(array_1, array_1_size);
	cout << "Array 2: ";
	print_array(array_2, array_2_size);

	//	Cross-multiply
	result = apply_all(array_1, array_1_size, array_2, array_2_size);
	cout << "Result:  ";
	print_array(result, result_size);

	//	Freeing up memory
	delete [] result;
	delete [] array_1;
	delete [] array_2;
}

void	print_array(const int *array, size_t array_size)
{
	for (size_t i {0}; i < array_size; i++)
		cout << *array++ << " ";
	cout << endl;
}

int		*apply_all(int array_1[], size_t array_1_size, int array_2[], size_t array_2_size)
{
	int	*result {new int[array_1_size * array_2_size]};
	int	result_counter {0};

	for (size_t i {0}; i < array_2_size; i++)
		for (size_t j {0}; j < array_1_size; j++)
			*(result + result_counter++) = array_2[i] * array_1[j];

	return result;
}
