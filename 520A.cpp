#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;
using std::tolower;
using std::sort;
using std::cin;
using std::cout;
using std::endl;

string pangram(const int& n, string& text)
{
    vector<int> alphabet(26);

    for (auto i = 0; i != n; ++i)
    {
        text[i] = tolower(text[i]);
    }
    cout << endl;
    for (auto i = 0; i != n; ++i)
    {
        alphabet[int(text[i]) - 97] = 1;
    }
    sort(alphabet.begin(), alphabet.end());

    if (alphabet[0] != alphabet[alphabet.size() - 1])
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

/*int main()
{
    int n;
    cin >> n;

    string text;
    cin >> text;

    cout << pangram(n, text) << endl;

    return 0;
}
*/
