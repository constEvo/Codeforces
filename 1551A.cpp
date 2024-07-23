
#include <iostream>

using std::cin;
using std::istream;
using std::cout;
using std::endl;

void coins(istream& in, int& t)
{
    long long int n;
    int c1, c2, min;
    while (t--)
    {
        in >> n;
        c1 = n / 3 * 1;
        c2 = (n / 3 * 2) / 2;
        if ((n - c1 - c2 * 2) % 2 == 0)
        {
            c2 += (n - c1 - c2 * 2) / 2;
        }
        else if ((n - c1 - c2 * 2) % 2 == 1)
        {
            c1 += (n - c1 - c2 * 2) % 2;
        }
        cout << c1 << " " << c2 << endl;
    }


}

/*
int main()
{
    int t;
    cin >> t;
    coins(cin, t);

    return 0;
}
*/
