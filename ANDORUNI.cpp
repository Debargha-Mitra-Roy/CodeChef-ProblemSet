/*
    LINK:   https://www.codechef.com/START21C/problems/ANDORUNI
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int t;
        cin >> t;

        int ans = 0;

        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;

            ans = ans | (t & x);
            t = t | x;
        }

        cout << ans << "\n";
    }

    return 0;
}