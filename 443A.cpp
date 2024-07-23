#include <iostream>
#include <unordered_set>
#include <string>

using std::string;
using std::istream;
using std::unordered_set;
using std::cin;
using std::cout;
using std::endl;

int letters(string& text)
{
    unordered_set<char> unique;
    for (auto i = 0; i != text.size() - 1; ++i)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            unique.insert(text[i]);
        }
    }
    return unique.size();
}

/*int main()
{
    string text;

    getline(cin, text);

    cout << letters(text);

    return 0;
}
*/