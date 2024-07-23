#include <iostream>


using std::cin;
using std::istream;
using std::cout;
using std::endl;

void dividing_task(istream& in, int& n)
{
    int a, b, temp;
    while (n--)
    {
        in >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            temp = (a / b) + 1;
            temp = temp * b - a;
            cout << temp << endl;
        }

    }
}

/*
int main()
{
    int n;
    cin >> n;

    dividing_task(cin, n);

    return 0;
}
*/