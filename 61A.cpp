#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

string fast_math(const string& first, const string& second)
{
	string res;

	for (auto i = 0; i != first.size(); ++i)
	{
		if (first[i] != second[i]) { res.push_back('1'); }
		else { res.push_back('0'); }
	}
	return res;
}


