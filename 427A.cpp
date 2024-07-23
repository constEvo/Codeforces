#include <iostream>

using std::istream;
using std::cin;
using std::cout;
using std::endl;

int cases(istream& in, int& n)
{
    int e, res = 0, p = 0, c = 0;
    while (n--)
    {
        in >> e;
        if (e >= 1)
        {
            res += e;
            p += e;
        }
        else
        {
            if (res > 0)
            {
                res += e;
            }
            else
            {
                c += e;
            }
        }
    }
    if (res < 0)
    {
        c += res;
    }
    return c * (-1);
}

/*int main()
{
    int n;;
    cin >> n;

    cout << cases(cin, n) << endl;

    return 0;
}
*/
