
#include <iostream>
#include <cmath>

using std::cin;
using std::istream;
using std::cout;
using std::endl;

void min_square(istream& in, int& t)
{
    int a, b;
    int square;

    while (t--)
    {
        in >> a >> b;
        if (a > b)
        {
            if (a <= b * 2)
            {
                square = pow(b * 2, 2);
            }
            else
            {
                square = pow(a, 2);
            }
        }
        else
        {
            if (a * 2 >= b)
            {
                square = pow(a * 2, 2);
            }
            else
            {
                square = pow(b, 2);
            }

        }
        cout << square << endl;
    }
}

/*
int main()
{
    int t;
    cin >> t;
    min_square(cin, t);

    return 0;
}
*/
