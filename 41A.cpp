#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

string translate(const string& s,  const string& t)
{
	string res;
	typedef string::const_reverse_iterator iter;

	for (iter s_iter = s.rbegin(); s_iter != s.rend(); ++s_iter)
	{
		res.push_back(*s_iter);
	}
	
	if (res == t) { return "YES"; }
	else { return "NO"; }
}

