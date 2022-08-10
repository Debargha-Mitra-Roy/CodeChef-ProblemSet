/*
    LINK:   https://www.codechef.com/START32D/problems/MAXTHEMIN
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (k < n - 1)
        cout << v[k] << "\n";

    else
        cout << v[n - 1] << "\n";

    return 0;
}