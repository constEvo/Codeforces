#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::size_t;
using std::swap;

string queue(const int& n, int& t, string& s)
{
	while (t--)
	{
		for (int i = 0; i != n; ++i)
		{
			if (s[i] == 'B' && s[i + 1] == 'G')
			{
				swap(s[i], s[i + 1]);
				i++;
			}
		}
	}

	return s;
}


