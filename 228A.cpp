#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;

long long int min( vector<int>& s)
{
	long long int res = 0;
	
	typedef vector<int>::iterator iter;
	iter b = s.begin();
	iter e = s.end();
	sort(b, e);

	for (auto i = 1; i != 4; ++i)
	{
		if (s[i] == s[i - 1]) { ++res; }
		
	}

	return res;
}

