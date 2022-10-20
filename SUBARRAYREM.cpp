/*
    LINK:   https://www.codechef.com/submit/SUBARRAYREM
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
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int countZero = count(arr.begin(), arr.end(), 0);
        int countOne = count(arr.begin(), arr.end(), 1);
        int minimum = min(countZero, countOne);
        int ans = minimum;

        countOne = countOne - minimum;

        ans = ans + (countOne / 3);
        cout << ans << "\n";
    }

    return 0;
}