#include <iostream>
#include <string>
#include <cctype>

using std::istream;
using std::string;
using std::toupper;
using std::cin;
using std::cout;
using std::endl;

void sum(istream& in, int& t)
{
    string input;
    while (t--)
    {
        in >> input;
        for (auto i = 0; i != input.size(); ++i)
        {
            input[i] = toupper(input[i]);
        }
        cout << "input : " << input << endl;
        if (input == "YES")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

}

/*
int main()
{
    int t;
    cin >> t;

    sum(cin, t);

    return 0;
}
*/
