/*
    LINK:   https://www.codechef.com/FEB222C/problems/HELIUM3
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int require = (a * b);
        int taken = (x * y);

        if (required <= taken)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}