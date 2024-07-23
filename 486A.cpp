#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

long long int f(long long int& n)
{
	long long int res = 0;

	if (n % 2 == 0) { res = n / 2;  }
	else { res = (-1 * (n + 1)) / 2; }
	return res;
}

