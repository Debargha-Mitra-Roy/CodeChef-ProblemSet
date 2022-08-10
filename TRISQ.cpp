/*
    LINK:   https://www.codechef.com/problems/TRISQ
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin >> b;

        b = b / 2;

        int ans = (b * (b - 1)) / 2;

        cout << ans << "\n";
    }

    return 0;
}