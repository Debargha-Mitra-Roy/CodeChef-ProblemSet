/*
    LINK:   https://www.codechef.com/problems/SMPAIR
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int ans = v[0] + v[1];

        cout << ans << "\n";
    }

    return 0;
}