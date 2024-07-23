#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int new_year(const int& n, const int& k)
{
    int temp = 240 - k, time = 5, tasks = 0, i = 1;

    while (temp > 0 && tasks != n)
    {
        temp = temp - time * i;
        ++i;
        if (temp >= 0)
        {
            ++tasks;
        }
    }
    return tasks;
}

/*int main()
{
    int n, k;
    cin >> n >> k;

    cout << new_year(n, k);

    return 0;
}
*/
