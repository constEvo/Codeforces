#include <iostream>

using std::cin;
using std::cout;
using std::endl;


bool simmilar(const int& res)
{
	return (res / 1000 == (res / 100) % 10 || res / 1000 == (res % 100) / 10 || res / 1000 == (res % 10))
		|| ((res / 100) % 10 == (res % 100) / 10 || (res / 100) % 10 == res % 10) || (res % 100) / 10 == res % 10;
}

int year(const int& y)
{
	int res = y + 1;
	

	while (simmilar(res))
	{
		++res;
	}

	return res;
}

