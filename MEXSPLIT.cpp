/*
    LINK:   https://www.codechef.com/COOK139C/problems/MEXSPLIT
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int operation(vector<int> &v, int n)
{
    int zeros = count(v.begin(), v.end(), 0);

    int maxx = n - zeros;

    int ans = max(maxx, zeros);

    return ans;
}

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

        cout << operation(v, n) << endl;
    }

    return 0;
}