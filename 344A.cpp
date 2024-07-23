#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::size_t;

int pairs(const int& n, const vector<string>& v)
{
	int max = 1;
	

	for (size_t i = 1; i != n; ++i)
	{
		if (v[i] != v[i - 1]) 
		{ 
			++max;
		}
		
	}
	return max;
}

