/*
    LINK:   https://www.codechef.com/problems/CHN15A
*/

#include <iostream>
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

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] + k;

            if (arr[i] % 7 == 0)
                count++;

            else
                continue;

        }

        cout << count << "\n";
    }


    return 0;
}