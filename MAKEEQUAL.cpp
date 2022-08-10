/*
    LINK:   https://www.codechef.com/problems/MAKEEQUAL
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int ans = arr[n - 1] - arr[0];

        cout << ans << "\n";
    }

    return 0;
}