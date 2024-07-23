#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;


int trolley(const int& n, const vector<int>& a, const vector<int>& b)
{
	int max = 0;
	int temp = 0;
	int sum = 0;

	for (auto i = 0; i != n; ++i)
	{
		temp = sum - a[i] + b[i];
		sum = temp;
		if (max < temp) { max = temp; }
	}
	
	return max;
}

