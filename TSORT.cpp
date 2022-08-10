/*
    LINK:   https://www.codechef.com/problems/TSORT
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (auto it : arr)
    {
        cout << it << "\n";
    }

    return 0;
}