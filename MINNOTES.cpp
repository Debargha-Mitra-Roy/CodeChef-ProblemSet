/*
    LINK:   https://www.codechef.com/JULY21C/problems/MINNOTES
*/


#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, x = 0, y = 0, money = 0;
        cin >> n;

        long long int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        x = arr[0];
        y = arr[n - 1];

        for (long long int i = 0; i < n - 1; i++)
        {
            money = money + (arr[i] / x);
        }

        cout << money + 1 << "\n";
    }
    
    return 0;
}