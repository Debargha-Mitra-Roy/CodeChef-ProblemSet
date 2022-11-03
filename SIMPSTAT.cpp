/*
    LINK:	https://www.codechef.com/submit/SIMPSTAT
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, k;
        cin >> n >> k;

        vector<double> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < k; i++)
        {
            arr.pop_back();
        }

        reverse(arr.begin(), arr.end());

        for (int i = 0; i < k; i++)
        {
            arr.pop_back();
        }

        double sum = 0;

        for (int i = 0; i < n - 2 * k; i++)
        {
            sum += arr[i];
        }

        double ans = sum / (n - 2 * k);
        cout << fixed << setprecision(6) << ans << "\n";
    }

    return 0;
}