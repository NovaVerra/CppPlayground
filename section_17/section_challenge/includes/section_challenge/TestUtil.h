#include "./Test.h"
#include <memory>
#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::unique_ptr;
using std::make_unique;
using std::shared_ptr;
using std::make_shared;
using std::vector;

unique_ptr<vector<shared_ptr<Test>>> make();
void	fill(vector<shared_ptr<Test>> &vec, int num);
void	display(const vector<shared_ptr<Test>> &vec);
