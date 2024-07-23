#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::size_t;


int vanya_fence(const int& h, const vector<int>& a)
{
	int width = 0;
	
	typedef vector<int>::const_iterator iter;

	for (iter it = a.begin(); it != a.end(); ++it)
	{
		if (*it > h) { width += 2; }
		else { ++width;  }
	}

	return width;
}

