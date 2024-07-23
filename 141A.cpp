#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::vector;
using std::string;
using std::find;
using std::cin;
using std::cout;
using std::endl;

string joke(string& first, 
			string& second, 
			string& third)
{
	string copy = third;

	for (auto iter = third.begin(); iter != third.end(); ++iter)
	{
		if (find(first.begin(), first.end(), *iter) != first.end())
		{
			first.erase(find(first.begin(), first.end(), *iter));
			copy.erase(find(copy.begin(), copy.end(), *iter));
			
		}
		else if (find(second.begin(), second.end(), *iter) != second.end())
		{
			second.erase(find(second.begin(), second.end(), *iter));
			copy.erase(find(copy.begin(), copy.end(), *iter));
		}
	}

	if (first.empty() &&
		second.empty() &&
		copy.empty())
	{
		return "YES";
	}
	else
	{
		return "NO";
	}
}

