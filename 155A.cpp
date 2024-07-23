#include <iostream>

using std::istream;
using std::cin;
using std::cout;
using std::endl;

int max_min(istream& in, int& n)
{
    int v;
    int max_v = -1, min_v = -1, crit = 0;

    while (n--)
    {
        in >> v;
        if (max_v == -1 && min_v == -1)
        {
            max_v = v;
            min_v = v;
        }
        else if (v > max_v)
        {
            max_v = v;
            ++crit;
        }
        else if (v < min_v)
        {
            min_v = v;
            ++crit;
        }
    }
    return crit;
}

/*int main()
{
    int n;
    cin >> n;

    cout << max_min(cin, n) << endl;

    return 0;
}
*/