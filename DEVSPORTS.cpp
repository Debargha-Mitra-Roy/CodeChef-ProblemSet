/*
    LINK:   https://www.codechef.com/START21C/problems/DEVSPORTS
*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int z, y, a, b, c;
        cin >> z >> y >> a >> b >> c;

        int rem = z - y;
        int cost = a + b + c;

        if (rem < cost)
            cout << "NO\n";

        else
            cout << "YES\n";
    }

    return 0;
}