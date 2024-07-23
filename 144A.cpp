#include <iostream>
#include <vector>

using std::vector;
using std::istream;
using std::cin;
using std::cout;
using std::endl;

int general_arrives(istream& in, int& soldiers)
{
    int temp;
    int res = 0;

    int max_h = 0,
        min_h = 101,
        i_max = 0, i_min = 0;

    for (auto i = 0; i != soldiers; ++i)
    {
        in >> temp;
        if (max_h < temp)
        {
            max_h = temp;
            i_max = i;
        }
        if (min_h >= temp)
        {
            min_h = temp;
            i_min = i;
        }
    }
    res = i_max;
    if (i_max > i_min)
    {
        --res;
    }
    res += soldiers - i_min - 1;

    return res;
}

/*int main()
{
    int soldiers, h;
    cin >> soldiers;


    cout << general_arrives(cin, soldiers) << endl;

    return 0;
}
*/