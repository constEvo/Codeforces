#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

string lucky_number(long long int& n)
{
	int i = 0;

	while (n / 10 != 0 || n % 10 == 7 || n % 10 == 4)
	{
		if (n % 10 == 7 || n % 10 == 4)
		{
			++i;
		}
		n /= 10;
	}
	
	if (i == 7 || i == 4) { return "YES"; }
	else { return "NO"; }
}

