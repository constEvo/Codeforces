#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::size_t;


int dormitory(const int& n, const vector<int>& p, const vector<int>& q)
{
	int res = 0;
	int friends = 2;

	for (size_t i = 0; i != n; ++i)
	{
		if (p[i] + friends <= q[i]) { ++res; }
	}
	return res;
}


 