#include "../includes/section_challenge/header.h"

template <typename T>
void	display(const deque<T> &deq)
{
	cout << "[ ";
	for (auto elem : deq)
		cout << elem << " ";
	cout << "]" << endl;
}

void	test_00()
{
	cout << "========================================" << endl;
	cout << "Test 00" << endl;
	deque<int>	deq_00 {5, 1, 1, 1, 5};
	display(deq_00);

	deque<int>	deq_01 (10, 100);
	display(deq_01);

	deq_01.at(0) = 5;
	deq_01[1] = 5;
	display(deq_01);
}

void	test_01()
{
	cout << "========================================" << endl;
	cout << "Test 01" << endl;
	deque<int>	deq_00 {0, 0, 0};
	display(deq_00);
	deq_00.push_back(20);
	deq_00.push_front(10);
	display(deq_00);

	cout << deq_00.back() << endl;
	cout << deq_00.front() << endl;

	deq_00.pop_back();
	deq_00.pop_front();
	display(deq_00);

	cout << deq_00.size() << endl;
}

void	test_02()
{
	cout << "========================================" << endl;
	cout << "Test 02" << endl;
	array<int, 10>	arr {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	deque<int>		deq {};

	for (auto elem : arr)
	{
		if (elem % 2 == 0)
			deq.push_back(elem);
		else
			deq.push_front(elem);
	}
	display(deq);
}

void	test_03()
{
	cout << "========================================" << endl;
	cout << "Test 03" << endl;
	array<int, 10>	arr {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	deque<int>		deq {};

	std::copy(arr.begin(), arr.end(), std::front_inserter(deq));
	display(deq);

	deq.clear();

	std::copy(arr.begin(), arr.end(), std::back_inserter(deq));
	display(deq);
}

void	test_04()
{
	cout << "========================================" << endl;
	cout << "Test 04" << endl;
}

void	test_05()
{
	cout << "========================================" << endl;
	cout << "Test 05" << endl;
}


int	main()
{
	test_00();
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
	return 0;
}
