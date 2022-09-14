/*
    LINK:   https://www.codechef.com/START56D/problems/FARAWAY
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
        int n, m;
        cin >> n >> m;

        vector<int> arr(n), temp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > m / 2)
                temp.push_back(abs(arr[i] - 1));

            else
                temp.push_back(abs(arr[i] - m));
        }

        int sum = 0;

        for (int i = 0; i < temp.size(); i++)
        {
            sum = sum + temp[i];
        }

        cout << sum << "\n";
    }

    return 0;
}