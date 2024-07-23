
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void hulk(int& n)
{
    string emotion;
    int i = 0;
    while (i != n)
    {
        if (i % 2 == 0)
        {
            emotion = "I hate ";
            cout << emotion;
            if (i == n - 1)
            {
                cout << "it ";
            }
            else
            {
                cout << "that ";
            }
        }
        else
        {
            emotion = "I love ";
            cout << emotion;
            if (i == n - 1)
            {
                cout << "it ";
            }
            else
            {
                cout << "that ";
            }
        }
        ++i;
    }
}

/*int main() {
    int n;
    cin >> n;

    hulk(n);

    return 0;
}
*/