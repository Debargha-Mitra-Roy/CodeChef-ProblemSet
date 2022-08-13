/*
    LINK:   https://www.codechef.com/COOK137C/problems/MASKPOL
*/

#include <iostream>
using namespace std;

int main()
{
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