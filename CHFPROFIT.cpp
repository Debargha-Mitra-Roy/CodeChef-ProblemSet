/*
    LINK:   https://www.codechef.com/START23C/problems/CHFPROFIT
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

        int ans = (x * z) - (x * y);

        cout << ans << "\n";
    }

    return 0;
}