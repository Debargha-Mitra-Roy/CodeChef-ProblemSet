/*
    LINK:   https://www.codechef.com/CCSTART2/problems/ANGTRICH
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > 0 && b > 0 & c > 0)
    {
        if (a + b + c == 180)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    else
        cout << "NO\n";

    return 0;
}