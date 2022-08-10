/*
    LINK:   https://www.codechef.com/LTIME103C/problems/CHEFTRANS
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, z;
        cin >> x >> y >> z;

        if (x + y < z)
            cout << "PLANEBUS\n";

        else if (x + y > z)
            cout << "TRAIN\n";

        else
            cout << "EQUAL\n";
    }

    return 0;
}