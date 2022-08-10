/*
    LINK:   https://www.codechef.com/INFI21C/problems/DOLL
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
            if (arr[i] > k)
                count++;

            else
                continue;
        }

        cout << count << "\n";
    }

    return 0;
}