/*
    LINK:   https://www.codechef.com/START31D/problems/ALTSTR
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

        string s;
        cin >> s;

        int one = 0;
        int zero = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;

            else
                zero++;
        }

        int ans = 0;

        if (zero == one)
            ans = 2 * zero;

        else if (zero < one)
            ans = (2 * zero) + 1;

        else
            ans = (2 * one) + 1;

        cout << ans << "\n";
    }

    return 0;
}