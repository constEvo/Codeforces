
#include <iostream>
#include <vector>

using std::vector;
using std::istream;
using std::cin;
using std::cout;
using std::endl;

vector<int> right_array(istream& in, int& t)
{
    vector<int> result;
    int n, value;
    vector<int> arrays;
    int temp = 0, even = 0, odd = 0;

    while (t--)
    {
        in >> n;
        for (auto i = 0; i != n; ++i)
        {
            cin >> value;
            arrays.push_back(value);
            if (i % 2 != 0 && arrays[i] % 2 == 0)
            {
                ++even;
                ++temp;
            }
            else if (i % 2 == 0 && arrays[i] % 2 != 0)
            {
                ++odd;
                ++temp;
            }
        }
        if (even == odd)
        {
            result.push_back(even);
        }
        else
        {
            result.push_back(-1);
        }

        arrays.clear();
        even = 0;
        odd = 0;
        temp = 0;
    }

    return result;
}


/*
int main()
{
    int t;
    cin >> t;

    vector<int> result = right_array(cin, t);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}
*/