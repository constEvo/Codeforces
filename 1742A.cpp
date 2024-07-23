#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::istream;
using std::vector;
using std::sort;
using std::string;
using std::cin;
using std::cout;
using std::endl;

void sum(istream& in, int& t)
{
    int a;
    vector<int> nums;

    while (t--)
    {
        for (auto i = 0; i != 3; ++i)
        {
            in >> a;
            nums.push_back(a);
        }
        sort(nums.begin(), nums.end());
        if (nums[2] - nums[1] == nums[0])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        nums.clear();

    }
}

/*
int main()
{
    int t;
    cin >> t;

    sum(cin, t);

    return 0;
}
*/
