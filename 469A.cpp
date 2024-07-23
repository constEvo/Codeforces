#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::sort;
using std::find;
using std::cin;
using std::cout;
using std::endl;


string levels(const int& n,
	const int& lilX,
	vector<int>& levelX,
	const int& lilY,
	vector<int>& levelY)
{
	int count = 0;
	
	for (auto i = 0; i != lilY; ++i)
	{
		levelX.push_back(levelY[i]);
	}

	sort(levelX.begin(), levelX.end());

	const int lilXY = lilX + lilY + 1;
	
	for (auto i = 1; i != lilXY; ++i)
	{
		if (find(levelX.begin(), levelX.end(), i) != levelX.end())
		{
			++count;
		}
	}

	if (count == n)
	{
		return "I become the guy.";
	}
	else
	{
		return "Oh, my keyboard!";
	}
}

