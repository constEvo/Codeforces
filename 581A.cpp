#include <iostream>

using std::istream;
using std::cin;
using std::cout;
using std::endl;

int hip(int& a, int& b)
{
    int dif;
    if (a >= b)
    {
        dif = b;
        a -= b;
        a /= 2;
    }
    else
    {
        dif = a;
        b -= a;
        b /= 2;
    }
    return dif;
}

/*int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << hip(a, b) << " " << a << endl;
    }
    else
    {
        cout << hip(a, b) << " " << b << endl;
    }


    return 0;
}
*/