/*
    LINK:   https://www.codechef.com/START51D/problems/ADJXOR2
*/

#include <iostream>
using namespace std;

#define int long long int

const int N = 1e5 + 5;

int dp[N][2];

int xorValue(int x, int y)
{
    return (x ^ y);
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int arr[N];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 2; i <= n; i++)
        {
            dp[i][0] = max(xorValue(arr[i], arr[i - 1]) + dp[i - 1][0], xorValue(arr[i], arr[i - 1] + x) + dp[i - 1][1]);
            dp[i][1] = max(xorValue(arr[i] + x, arr[i - 1]) + dp[i - 1][0], xorValue(arr[i] + x, arr[i - 1] + x) + dp[i - 1][1]);
        }

        cout << max(dp[n][0], dp[n][1]) << "\n";
    }

    return 0;
}