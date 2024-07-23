#include <iostream>
#include <string>
#include <map>

using std::istream;
using std::string;
using std::map;
using std::cin;
using std::cout;
using std::endl;

int polyhedron(istream& in, int& n)
{
    string f;
    int sum = 0;

    map<string, int> figures;
    map<string, int>::iterator it;

    figures["Tetrahedron"] = 4;
    figures["Cube"] = 6;
    figures["Octahedron"] = 8;
    figures["Dodecahedron"] = 12;
    figures["Icosahedron"] = 20;

    while (n--)
    {
        in >> f;
        if (figures.find(f) != figures.end())
        {
            it = figures.find(f);
            sum += it->second;
        }
    }
    return sum;
}

/*int main()
{
    int n;
    cin >> n;

    cout << polyhedron(cin, n) << endl;

    return 0;
}
*/