#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void snake(const int& n, const int& m)
{
    for (auto i = 0; i != n; ++i)
    {
        for (auto j = 0; j != m; ++j)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if (j == m - 1 && i % 4 != 3)
                {
                    cout << "#";
                }
                else if ((i % 4 == 3) && (j == 0))
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }

}

/*int main()
{
    int n, m;
    cin >> n >> m;

    snake(n, m);

    return 0;
}
*/