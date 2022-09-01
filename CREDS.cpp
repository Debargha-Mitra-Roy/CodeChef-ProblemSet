/*
    LINK:   https://www.codechef.com/START54D/problems/CREDS
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

        int ans = (a * 4) + (b * 2);
        cout << ans << "\n";
    }

    return 0;
}