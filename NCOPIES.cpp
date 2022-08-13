/*
    LINK:   https://www.codechef.com/START51D/problems/NCOPIES
*/

#include <iostream>
using namespace std;

#define int long long int

const int N = 1e5 + 5;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s;
        cin >> n >> m >> s;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum = sum + (s[i] - '0');
        }

        if (sum == 0)
            cout << (n * m) << "\n";

        else if ((sum * m) % 2 == 1)
            cout << 0 << "\n";

        else
        {
            if (m % 2 == 0)
            {
                int cnt_0_start = 0, cnt_0_end = 0;

                for (int i = 0; i < n; i++)
                {
                    if (s[i] == '1')
                        break;

                    cnt_0_start++;
                }

                for (int i = n - 1; i >= 0; i--)
                {
                    if (s[i] == '1')
                        break;

                    cnt_0_end++;
                }

                int ans = cnt_0_start + cnt_0_end + 1;
                cout << ans << "\n";
            }

            else
            {
                int ans = 0, cur_sum = 0;

                for (int i = 0; i < n; i++)
                {
                    cur_sum = cur_sum + (s[i] - '0');
                    ans = ans + (cur_sum == sum / 2);

                    if (cur_sum > sum / 2)
                        break;
                }

                cout << ans << "\n";
            }
        }
    }

    return 0;
}