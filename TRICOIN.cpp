/*
    LINK:   https://www.codechef.com/problems/TRICOIN
*/

#include <iostream>
using namespace std;

bool isPossible(long long int mid, long long int n)
{
    long long int coins = (mid * (mid + 1)) / 2;

    if (coins <= n)
        return true;

    else
        return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int low = 1;
        long long int high = n;
        long long int ans = 0;

        while (low <= high)
        {
            long long int mid = (low + high) / 2;

            if (isPossible(mid, n))
            {
                ans = mid;
                low = mid + 1;
            }

            else
                high = mid - 1;
        }

        cout << ans << "\n";
    }

    return 0;
}