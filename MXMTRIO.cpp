/*
    LINK:   https://www.codechef.com/LTIME103C/problems/MXMTRIO
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

        reverse(arr, arr + n);

        long long int sub = (arr[0] - arr[n - 1]);
        long long int ans = sub * arr[1];

        cout << ans << "\n";
    }

    return 0;
}