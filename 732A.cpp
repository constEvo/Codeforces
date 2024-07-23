#include <iostream>

using std::istream;
using std::cin;
using std::cout;
using std::endl;

int shovel(int& k, const int& r)
{
    int res = 1, temp = 1;
    if (k % 10 == r || k % 10 == 0)
    {
        res = 1;
    }
    else if (k % 10 == 5 && r != 5)
    {
        res = 2;
    }
    else
    {
        while (k * temp % 10 != r)
        {
            ++temp;
        }
        res = temp;
    }
    return res;
}

/*int main()
{
    int k, r;
    cin >> k >> r;

    cout << shovel(k, r) << endl;

    return 0;
}
*/