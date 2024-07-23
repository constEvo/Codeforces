#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::abs;

void two_number(int& t)
{
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		cout << (abs(a - b) + 9) / 10 << endl;
	}
}

