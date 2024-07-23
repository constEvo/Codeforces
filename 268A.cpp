
#include <iostream>
#include <vector>

using std::istream;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int matches(istream& in, int& n)
{
    int h, a, res = 0;
    vector<int> home;
    vector<int> arrive;
    for (auto i = 0; i != n; ++i)
    {
        cin >> h;
        home.push_back(h);
        cin >> a;
        arrive.push_back(a);
    }
    for (auto i = 0; i != n; ++i)
    {
        for (auto j = 0; j != n; ++j)
        {
            if (home[i] == arrive[j])
            {
                ++res;
            }
        }
    }
    return res;
}

/*int main() {

    int n;
    cin >> n;

    cout << matches(cin, n);

    return 0;
}
*/