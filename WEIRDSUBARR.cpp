/*
    LINK:   https://www.codechef.com/submit/WEIRDSUBARR
*/

#include <iostream>
#include <vector>
#include <set>
#include <cassert>
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

        assert(set<int>(arr.begin(), arr.end()).size() == n);

        vector<int> hills{0};

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                hills.push_back(i);
        }

        hills.push_back(n - 1);

        long long int ans = 0;

        for (int i = 0; i < hills.size() - 1; i++)
        {
            long long int len = hills[i + 1] - hills[i] + 1;
            ans = ans + (len * (len - 1) / 2);
        }

        ans = ans + n;
        cout << ans << "\n";
    }

    return 0;
}