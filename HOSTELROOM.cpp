/*
    LINK:   https://www.codechef.com/START26D/problems/HOSTELROOM
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int maxx = x, sum = x;

        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];

            maxx = max(maxx, sum);
        }

        cout << maxx << "\n";
    }

    return 0;
}