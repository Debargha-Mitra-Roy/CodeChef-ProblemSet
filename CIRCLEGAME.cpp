/*
    LINK:   https://www.codechef.com/EXUN21C/problems/CIRCLEGAME
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, x;
        cin >> m >> x;

        int ans[x + 1];
        ans[1] = 1;

        if (x > 1)
        {
            for (int i = 2; i <= x; i++)
            {
                int temp;

                if (m % i != 0)
                    temp = m % i;

                else
                    temp = x;

                if (temp > ans[i - 1])
                    ans[i] = ans[i - 1];

                else
                    ans[i] = ans[i - 1] + 1;
            }
        }

        for (int i = 1; i <= x; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}