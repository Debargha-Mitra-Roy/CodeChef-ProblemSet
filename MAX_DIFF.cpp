/*
    LINK:   https://www.codechef.com/LP1TO201/problems/MAX_DIFF
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int ans = 0;

        if (n > s)
            ans = min(n, s);

        else
            ans = abs(abs(n - s) - n);

        cout << ans << "\n";
    }

    return 0;
}