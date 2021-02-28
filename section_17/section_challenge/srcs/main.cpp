#include "../includes/section_challenge/header.h"
#include "../includes/section_challenge/Test.h"
#include "../includes/section_challenge/TestUtil.h"

int	main()
{
	int	num {0};

	unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();
	cout << "how many data points do you wish to enter?" << endl;
	cin >> num;

	fill(*vec_ptr, num);
	display(*vec_ptr);
	return 0;
}
