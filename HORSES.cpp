/*
    LINK:	https://www.codechef.com/submit/HORSES
*/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> horses(n);
        for (int i = 0; i < n; i++)
        {
            cin >> horses[i];
        }

        sort(horses.begin(), horses.end());

        int ans = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            int diff = horses[i + 1] - horses[i];
            ans = min(ans, diff);
        }

        cout << ans << "\n";
    }

    return 0;
}   