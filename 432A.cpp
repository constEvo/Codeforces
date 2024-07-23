#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::find;
using std::cin;
using std::cout;
using std::endl;

int teams_number(const int& k, vector<int>& members)
{
    int teams = 0, tmp = 0;

    sort(members.begin(), members.end());

    while (!members.empty())
    {
        if (members[0] + k <= 5)
        {
            ++tmp;
            if (tmp % 3 == 0)
            {
                ++teams;

            }
            members.erase(members.begin());
        }
        else
        {
            members.erase(members.begin());
        }
    }
    return teams;
}

/*int main()
{
    int n, k, years;

    cin >> n >> k;

    vector<int> members;
    for (auto i = 0; i != n; ++i)
    {
        cin >> years;
        members.push_back(years);
    }

    cout << teams_number(k, members);

    return 0;
}
*/