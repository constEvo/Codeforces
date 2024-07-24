#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void borze(string& s)
{
	string temp;
	for (auto i = 0; i <= s.size() - 1; ++i)
	{
		temp += s[i];
		if (temp == ".")
		{
			cout << 0;
			temp.clear();
		}
		else if (temp == "-.")
		{
			cout << 1;
			temp.clear();
		}
		else if (temp == "--")
		{
			cout << 2;
			temp.clear();
		}

	}

}

/*int main()
{
	string s;
	cin >> s;

	borze(s);

	return 0;

}
*/