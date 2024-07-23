#include <iostream>
#include <algorithm>

using std::min;
using std::cin;
using std::cout;
using std::endl;

int cheers(int& friends, int& bottles,
    int& size, int& limes,
    int& dices, int& salt,
    int& tSize, int& tSalt)
{
    int tMin;

    size = size * bottles;
    tSize = (size / tSize) / friends;
    dices = dices * limes / friends;

    tSalt = salt / tSalt / friends;

    return min({ tSize, dices, tSalt });

}

/*int main()
{
    int friends, bottles, size, limes, dices, salt, tSize, tSalt;
    cin >> friends >> bottles >> size >> limes >> dices >> salt >> tSize >> tSalt;

    cout << cheers(friends, bottles, size, limes, dices, salt, tSize, tSalt);

    return 0;
}
*/