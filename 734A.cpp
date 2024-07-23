#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


string who_won(const int& n, const string& s)
{
	int count_A = 0, count_D = 0;
	typedef string::const_iterator iter;
	
	s.begin();

	for (iter sIter = s.begin(); sIter != s.end(); ++sIter)
	{
		if (*sIter == 'A') {++count_A; }
		else { ++count_D;  }
	}

	if (count_A > count_D) { return "Anton"; }
	else if (count_A < count_D) { return "Danik"; }
	else { return "Friendship"; }

}

