/*
    LINK:   https://www.codechef.com/JAN222C/problems/MINFD
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
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        reverse(arr, arr + n);

        int count = 0;
        int sum = 0;
        int temp = 0;

        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];

            if (sum <= k)
            {
                count++;
                temp = sum;
            }

            else
                break;
        }

        int flag = 0;

        if (sum < k)
            flag = -1;

        else if (count == 0)
            flag = 1;

        else if (temp < k)
            flag = count + 1;

        else
            flag = count;


        cout << flag << "\n";
    }

    return 0;
}