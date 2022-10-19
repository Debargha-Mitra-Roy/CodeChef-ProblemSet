/*
    LINK:   https://www.codechef.com/LP1TO201/problems/CHFSPL
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 3;

        vector<int> v(3);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int ans = v[2] + v[1];
        cout << ans << "\n";
    }

    return 0;
}