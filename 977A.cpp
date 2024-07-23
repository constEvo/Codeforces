#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::domain_error;


int wrong_sub(int& n, const int& k)
{	
	int i = 0;
	
	while (i != k)
	{
		if (n % 10 != 0) { n -= 1; }
		else { n /= 10; }
		++i;
	}
	return n;
}

bool restrictions(const int& n, const int& k)
{
	return n >= 2 && (k >= 1 && k <= 50);
}

