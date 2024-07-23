#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::size_t;

string easy_task( const vector<int>& row)
{
	typedef vector<int>::const_iterator iter;

	for (iter it = row.begin(); it != row.end(); ++it)
	{
		if (*it == 1) { return "HARD"; }
	}
	return "EASY";
}

