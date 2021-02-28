#include "../includes/section_challenge/TestUtil.h"

unique_ptr<vector<shared_ptr<Test>>> make()
{
	return make_unique<vector<shared_ptr<Test>>>();
}

void	fill(vector<shared_ptr<Test>> &vec, int num)
{
	int	temp;

	for (int i {1}; i <= num; i++)
	{
		cout << "Please enter data point " << i << ": ";
		cin >> temp;
		vec.push_back(make_shared<Test>(temp));
	}
}

void	display(const vector<shared_ptr<Test>> &vec)
{
	for (const auto &v : vec)
		cout << v->get_data() << endl;
}
