#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;


double share( const int& n, const vector<double>& p)
{
	double sum_share = 0;

	for (auto i = 0; i != n; ++i)
	{
		sum_share += p[i] / 100;
	}

	return sum_share / n * 100;
}

