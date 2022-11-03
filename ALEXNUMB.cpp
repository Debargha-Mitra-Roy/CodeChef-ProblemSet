/*
    LINK:	https://www.codechef.com/submit/ALEXNUMB
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++)
        {
            mpp[arr[i]]++;
        }

        long long int sum = 0;

        for (auto it : mpp)
        {
            if (it.second > 1)
                sum += (it.second * (it.second - 1L) / 2L);
        }

        cout << sum << "\n";
    }

    return 0;
}