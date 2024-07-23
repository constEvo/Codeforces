
#include <iostream>


using std::istream;
using std::cin;
using std::cout;
using std::endl;

void candies(istream& in, int& t)
{
    int n, res;

    while (t--)
    {
        cin >> n;
        if (n > 2)
        {
            if (n % 2 == 0)
            {
                res = n / 2 - 1;
            }
            else
            {
                res = n / 2;
            }
        }
        else
        {
            res = 0;
        }
        cout << res << endl;;
    }
}

/*
int main() {

    int t;
    cin >> t;

    candies(cin, t);

    return 0;
}
*/