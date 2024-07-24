#include <iostream>
#include <vector>

using std::istream;
using std::vector;
using std::cin;
using std::cout;
using std::endl;


void spy(istream& in, int& t)
{
	int n, num, temp = 0;
	vector<int> row;

	while (t--)
	{
		
		in >> n;
		for (auto i = 0; i != n; ++i)
		{
			in >> num;
			row.push_back(num);
		}
		for (auto i = 2; i != n; ++i)
		{
			if (temp == 0 )
			{
				temp = row[i - 1];
			}
			if (row[i] != row[i - 2])
			{
				if (row[i] != row[i - 1])
				{
					cout << i + 1 << endl;
					i = n - 1;
				}
				else
				{
					cout << i - 1 << endl;
					i = n - 1;
				}
			}
			else if (row[i] != row[i - 1])
			{
				if (row[i - 1] != row[i - 2])
				{
					cout << i << endl;
					i = n - 1;
				}
				else
				{
					cout << i - 1 << endl;
					i = n - 1;
				}

			}
		}
		row.clear();
	}

}

/*int main()
{
	int t;
	cin >> t;

	spy(cin, t);

	return 0;
}
*/