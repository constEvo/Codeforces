#include <iostream>

using std::cin;
using std::cout;
using std::endl;

long long int withdraw(int& m)
{
	long long int min = 0;

	while (m != 0)
	{
		if (m / 100 != 0) 
		{ 
			min += m / 100;
			m -= (m / 100) * 100;
		}
		else if (m / 20 != 0)
		{
			min += m / 20;
			m -= (m / 20) * 20;
		}
		else if (m / 10 != 0)
		{
			min += m / 10;
			m -= (m / 10) * 10;
		}
		else if (m / 5 != 0)
		{
			min += m / 5;
			m -= (m / 5) * 5;
		}
		else if (m / 1 != 0)
		{
			min += m / 1;
			m -= (m / 1) * 1;
		}
	}
	return min;
}

