#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::sort;
using std::cin;
using std::cout;
using std::endl;
using std::istream;


vector<string> min_array(istream& in, const int& t)
{
	int n, v, c = 0;

	vector<int> a;
	vector<string> res;

	while (c != t)
	{
		
		int count = 0;
		in >> n;
		for (auto i = 0; i != n; ++i)
		{
			cin >> v;
			a.push_back(v);
		}
		sort(a.begin(), a.end());
		for (auto i = 1; i != n; ++i)
		{
			if (a[i] - a[i - 1] <= 1)
			{
				++count;
			}
		}
		if (count == n - 1) { res.push_back("YES"); }
		else { res.push_back("NO"); }
		a.clear();
		++c;
	}

	return res;
}

