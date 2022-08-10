/*
    LINK:   https://www.codechef.com/CCSTART2/problems/REVMEE
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, arr + n);

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";

    return 0;
}