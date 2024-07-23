#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;


int sale(const int& m, vector<int>& a)
{
	typedef vector<int>::iterator iter;
	iter b = a.begin();
	iter e = a.end();
	sort(b, e);

	int sum = 0;

	for (auto i = 0; i != m; ++i)
	{
		if (a[i] < 0) { sum += a[i] * (-1); }
		
	}

	return sum;
}

