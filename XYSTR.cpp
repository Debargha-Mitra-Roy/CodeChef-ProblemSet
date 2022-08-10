/*
    LINK:   https://www.codechef.com/problems/XYSTR
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int len = s.length();

        int dp[len] = {0};
        int vis[len] = {0};

        for (int i = 1; i < len; i++)
        {
            if (!vis[i - 1] and s[i - 1] != s[i])
            {
                vis[i] = vis[i - 1] = 1;
                dp[i] = dp[i - 1] + 1;
            }

            else
                dp[i] = dp[i - 1];
        }

        cout << dp[len - 1] << endl;
    }

    return 0;
}