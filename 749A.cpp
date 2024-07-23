#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

void task(const int& n)
{
    vector<int> res;
    int k;

    if (n % 2 == 0)
    {
        k = n / 2;
        for (auto i = 0; i != k; ++i)
        {
            res.push_back(2);
        }
    }
    else
    {
        k = n / 2;
        for (auto i = 0; i != k - 1; ++i)
        {
            res.push_back(2);
        }
        res.push_back(3);
    }
    cout << k << endl;
    for (auto i = 0; i != k; ++i)
    {
        cout << res[i] << " ";
    }
}

/*int main()
{
    int n;
    cin >> n;

    task(n);

    return 0;

}
*/