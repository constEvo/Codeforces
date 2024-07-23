#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::istream;



void present(istream& in, const int& n)
{
	int t;
	vector<int> a(n);

	for (auto i = 0; i != n; ++i)
	{
		in >> t;
		a[--t] = i + 1;
	}
	for (auto i : a)
		cout << i << " ";
}

