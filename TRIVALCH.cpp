/*
    LINK:   https://www.codechef.com/CCSTART2/problems/TRIVALCH
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 3);

    if (arr[0] + arr[1] > arr[2])
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}