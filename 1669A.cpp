#include <iostream>
#include <string>

using std::istream;
using std::string;
using std::cin;
using std::cout;
using std::endl;

void division(istream& in, int& t)
{
	int rating;

	while (t--)
	{
		in >> rating;
		if (rating >= 1900)
		{
			cout << "Division 1" << endl;
		}
		else if (rating >= 1600 && rating <= 1899)
		{
			cout << "Division 2" << endl;
		}
		else if (rating >= 1400 && rating <= 1599)
		{
			cout << "Division 3" << endl;
		}
		else
		{
			cout << "Division 4" << endl;
		}
	}
}
/*
int main()
{
	int t;
	cin >> t;

	division(cin, t);

	return 0;
}
*/