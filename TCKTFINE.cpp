/*
    LINK:   https://www.codechef.com/START54D/problems/TCKTFINE
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, p, q;
        cin >> x >> p >> q;

        int ans = (p - q) * x;
        cout << ans << "\n";
    }

    return 0;
}