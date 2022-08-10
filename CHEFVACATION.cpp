/*
    LINK:   https://www.codechef.com/START17C/problems/CHEFVACATION
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (x + y > z)
            cout << "NO\n";

        else
            cout << "Yes\n";
    }

    return 0;
}