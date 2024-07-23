#include <iostream>
#include <vector>
#include <algorithm>


using std::vector;
using std::sort;
using std::greater;
using std::cin;
using std::cout;
using std::endl;

void pair_sum(vector<int>& cards)
{
    int sum1 = 0;
    int sum2 = 0;

    int turn = 1;

    while (!cards.empty())
    {
        if (turn == 1)
        {
            if (cards[0] >= cards.back())
            {
                sum1 += cards[0];
                cards.erase(cards.begin());
                turn = 2;
            }
            else
            {
                sum1 += cards.back();
                cards.pop_back();
                turn = 2;
            }
        }
        else
        {
            if (cards[0] >= cards.back())
            {
                sum2 += cards[0];
                cards.erase(cards.begin());
                turn = 1;
            }
            else
            {
                sum2 += cards.back();
                cards.pop_back();
                turn = 1;
            }
        }
    }

    cout << sum1 << " " << sum2 << endl;
}


/*int main()
{
    int n, p;
    vector<int> cards;
    cin >> n;

    for (auto i = 0; i != n; ++i)
    {
        cin >> p;
        cards.push_back(p);
    }

    pair_sum(cards);


    return 0;
}
*/