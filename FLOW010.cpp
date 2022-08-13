/*
    LINK:   https://www.codechef.com/problems/FLOW010
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;

        if (c == 'B' || c == 'b')
            cout << "BattleShip\n";

        if (c == 'C' || c == 'c')
            cout << "Cruiser\n";

        if (c == 'D' || c == 'd')
            cout << "Destroyer\n";

        if (c == 'F' || c == 'f')
            cout << "Frigate\n";
    }

    return 0;
}