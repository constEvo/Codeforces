#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::min;
using std::cin;
using std::cout;
using std::endl;

void min_team(const int& n)
{
    int temp;
    vector<int> a1;
    vector<int> a2;
    vector<int> a3;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if (temp == 1)
            a1.push_back(i + 1);
        else if (temp == 2)
            a2.push_back(i + 1);
        else
            a3.push_back(i + 1);
    }
    int res = min(a1.size(), min(a2.size(), a3.size()));
    cout << res << endl;
    for (int i = 0; i < res; ++i) {
        cout << a1[i] << " " << a2[i] << " " << a3[i] << endl;
    }
}
