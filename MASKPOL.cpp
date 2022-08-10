/*
    LINK:   https://www.codechef.com/COOK137C/problems/MASKPOL
*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;

        int rem = n - a;

        int ans = min(a, rem);

        cout << ans << "\n";
    }

    return 0;
}