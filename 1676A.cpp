#include <iostream>
#include <string>

using std::istream;
using std::string;
using std::size_t;
using std::stoi;
using std::cin;
using std::cout;
using std::endl;

void is_lucky(istream& in, int& t)
{
	string res;
	int sum1 = 0, sum2 = 0, ticket;
	
	while (t--)
	{
		in >> ticket;
		int part1 = ticket / 1000;
		int part2 = ticket % 1000;


		while (part1 != 0)
		{
			sum1 += (part1 % 10);
			part1 /= 10;
		}
		while (part2 != 0)
		{
			sum2 += (part2 % 10);
			part2 /= 10;
		}
		if (sum1 == sum2)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		sum1 = 0;
		sum2 = 0;
	}
	
}

/*int main()
{
	int t;
	cin >> t;

	is_lucky(cin, t);

	return 0;
}
*/