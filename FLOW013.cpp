/*
    LINK:   https://www.codechef.com/problems/FLOW013
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c > 180 || a + b + c < 180)
            cout << "NO\n";

        else
            cout << "YES\n";
    }

    return 0;
}