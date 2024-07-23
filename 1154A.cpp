#include <iostream>
#include <vector>
#include <algorithm>

using std::istream;
using std::vector;
using std::sort;
using std::cin;
using std::cout;
using std::endl;

void three_numb(istream& in)
{
    long long int x;
    vector<long long int> num;
    int a, b, c;
    for (auto i = 0; i != 4; ++i)
    {
        in >> x;
        num.push_back(x);
    }
    sort(num.begin(), num.end());
    a = num[3] - num[0];
    b = num[3] - num[1];
    c = num[3] - num[2];

    cout << a << " " << b << " " << c << " " << endl;

}

/*
int main()
{
    three_numb(cin);

    return 0;
}
*/
