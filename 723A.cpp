#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::sort;
using std::cin;
using std::cout;
using std::endl;

int min_dist(vector<int>& x)
{
	int min = 0;
	sort(x.begin(), x.end());
	
	int first = x[0];
	int second = x[1];
	int third = x[2];

	min = (third - second) + (second - first);
	
	return min;
}

