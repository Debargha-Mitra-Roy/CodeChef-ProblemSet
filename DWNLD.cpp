/*
    LINK:   https://www.codechef.com/DECQ2021/problems/DWNLD
*/

#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        int k;
        cin >> k;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int t, d;
            cin >> t >> d;

            if (t <= k)
            {
                k = k - t;
            }

            else
            {
                sum = sum + ((t - k) * d);
                k = 0;
            }
        }

        cout << sum << "\n";

    }

    return 0;
}