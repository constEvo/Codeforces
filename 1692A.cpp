#include <iostream>
#include <vector>

using std::istream;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void marathon(istream& in, int& t)
{
	vector<int> runners;
	int res = 0, dist, temp;

	while (t--)
	{
		for (int i = 0; i != 4; ++i)
		{
			in >> dist;
			runners.push_back(dist);
			temp = runners[0];
			if (temp < runners[i])
			{
				++res;
			}
		}
		cout << res << endl;
		runners.clear();
		res = 0;
	}
}

/*int main()
{
	int t;
	cin >> t;

	marathon(cin, t);

	return 0;
}
*/
		