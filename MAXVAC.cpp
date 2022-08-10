/*
    LINK:   https://www.codechef.com/START23C/problems/MAXVAC
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        string s;
        cin >> s;

        int ans = 0;

        vector<int> v;

        v.push_back(-1);

        int total = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                total = total + (i - v.back() - 1) / x;

                v.push_back(i);
            }
        }

        total = total + (n - v.back() - 1) / x;

        v.push_back(n);

        for (int i = 1; i < v.size() - 1; i++)
        {
            int temp = total - (v[i] - v[i - 1] - 1) / x - (v[i + 1] - v[i] - 1) / x + (v[i + 1] - v[i - 1] - 1) / x;
            ans = max(ans, temp);
        }

        cout << ans << "\n";
    }

    return 0;
}