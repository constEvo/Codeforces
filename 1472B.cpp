
#include <iostream>
#include <vector>
#include <algorithm>

using std::istream;
using std::vector;
using std::sort;
using std::greater;
using std::cin;
using std::cout;
using std::endl;

void fair_separation(istream& in, int& t)
{
    int n, value, sum1 = 0, sum2 = 0, sum = 0;
    vector<int> a;
    while (t--)
    {
        in >> n;
        for (auto i = 0; i != n; ++i)
        {
            in >> value;
            a.push_back(value);
        }
        sort(a.begin(), a.end(), greater<int>());
        while (!a.empty())
        {
            if (sum1 > sum2)
            {
                sum2 += a[0];
                a.erase(a.begin());
            }
            else
            {
                sum1 += a[0];
                a.erase(a.begin());
            }
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
        a.clear();
    }
}

/*
int main() {

    int t;
    cin >> t;

    fair_separation(cin, t);

    return 0;
}
*/