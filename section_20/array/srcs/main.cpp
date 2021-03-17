#include "../includes/section_challenge/header.h"

void	display(array<int, 5> &arr)
{
	cout << "[ ";
	for (auto i : arr)
		cout << i << " ";
	cout << "]" << endl;
}

void	test_01()
{
	array<int, 5>	arr {1, 2, 3, 4, 5};
	array<int, 5>	arr2 {};

	display(arr);
	display(arr2);

	cout << "Array 1: " << "Size of array 1 is: " << arr.size() << endl;
	cout << "Array 2: " << "Size of array 2 is: " << arr2.size() << endl;

	arr2 = {10, 20, 30, 40, 50};
	display(arr);
	display(arr2);

	arr[0] = 1000;
	arr.at(1) = 2000;
	display(arr);

	cout << "Array 1: " << arr2.front() << endl;
	cout << "Array 2: " << arr2.back() << endl;
}

void	test_02()
{
	array<int, 5>	arr {1, 2, 3, 4, 5};
	array<int, 5>	arr2 {};

	cout << "Array 1: " << "Size of array 1 is: " << arr.size() << endl;
	cout << "Array 2: " << "Size of array 2 is: " << arr2.size() << endl;

	display(arr);
	display(arr2);

	arr2.fill(9);

	display(arr);
	display(arr2);

	arr.swap(arr2);

	display(arr);
	display(arr2);
}

void	test_03()
{
	array<int, 5>	arr {1, 2, 3, 4, 5};
	int	*ptr = arr.data();
	cout << *ptr + 3 << endl;
	*ptr = 1000;
	display(arr);
}

void	test_04()
{
	array<int, 5>	arr {4, 3, 2, 5, 1};
	sort(arr.begin(), arr.end());
	display(arr);

}

void	test_05()
{
	array<int, 5>	arr {1, 2, 3, 4, 5};
	auto	min_it = min_element(arr.begin(), arr.end());
	auto	max_it = max_element(arr.begin(), arr.end());
	cout << *min_it << endl;
	cout << *max_it << endl;
}

void	test_06()
{
	array<int, 5>	arr {1, 2, 3, 3, 5};
	auto			it = adjacent_find(arr.begin(), arr.end());
	cout << *it << endl;
}

void	test_07()
{
	array<int, 5>	arr {1, 2, 3, 4, 5};
	int	sum = accumulate(arr.begin(), arr.end(), 0);
	cout << sum << endl;
}

void	test_08()
{
	array<int, 8>	arr {1, 2, 3, 4, 3, 3, 3, 3};
	int	sum = count(arr.begin(), arr.end(), 3);
	cout << sum << endl;
}

void	test_09()
{
	array<int, 10>	arr {1, 50, 51, 52, 53, 9, 8, 6, 5, 4};
	int	sum = count_if(arr.begin(), arr.end(), [](int x)
	{
		return ((x >= 50) && (x <= 100));
	});
	cout << sum << endl;
}

int	main()
{
	// test_01();
	// test_02();
	// test_03();
	// test_04();
	// test_05();
	// test_06();
	// test_07();
	// test_08();
	test_09();
	return 0;
}
