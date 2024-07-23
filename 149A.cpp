#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::sort;
using std::cin;
using std::cout;
using std::endl;


int assignment(const int& k, vector<int>& a)
{
	int res = 0, count = 0;
	

	typedef vector<int>::reverse_iterator riter;
	typedef vector<int>::iterator iter;
	riter rb = a.rbegin();
	riter re = a.rend();
	sort(rb, re);

	iter b = a.begin();
	iter e = a.end();

	while (res < k && b != e)
	{
		res += *b;
		++count;
		++b;
	}

	if (res >= k) { return count;  }
	else { return -1; }
	
}

