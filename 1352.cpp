#include <iostream>
#include <vector>


using std::istream;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void round_numbers(istream& in, int& t)
{
    int k = 0, zero = 1, n, temp;
    vector<int> round;
    while (t--)
    {
        in >> n;
        while (n != 0)
        {

            temp = n % 10;
            n = (n - temp) / 10;
            if (temp != 0)
            {
                ++k;
                round.push_back(temp * zero);
            }
            zero *= 10;
        }
        cout << k << endl;
        for (auto i = round.rbegin(); i != round.rend(); ++i)
        {
            cout << *i << " ";
        }
        cout << endl;
        k = 0;
        zero = 1;
        round.clear();
    }
}

/*int main()
{
    int t;
    cin >> t;

    round_numbers(cin, t);

    return 0;
}
*/
