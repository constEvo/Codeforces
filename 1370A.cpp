
#include <iostream>

using std::cin;
using std::istream;
using std::cout;
using std::endl;


void gcd(istream& in, int& t)
{
    while (t--)
    {
        long long int n;
        in >> n;
        cout << n / 2 << endl;
    }
}

/*
int main() {
    int t;
    cin >> t;

    gcd(cin, t);
    return 0;
}
*/