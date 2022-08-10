/*
    LINK:   https://www.codechef.com/LTIME103C/problems/RMNTREV
*/

#include <iostream>
using namespace std;

string romantic_reversals(string s, int n, int k)
{
    if (k == 1)
        return s;

    string ans = s;

    int l = 0, h = k - 1, ind = k - 1;

    while (l <= h)
    {
        if (l == h)
            ans[ind--] = s[l];

        else
        {
            ans[ind--] = s[l];
            ans[ind--] = s[h];
        }

        l++;
        h--;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        cout << romantic_reversals(s, n, k) << "\n";
    }

    return 0;
}