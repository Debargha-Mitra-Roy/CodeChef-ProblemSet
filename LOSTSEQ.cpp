/*
    LINK:   https://www.codechef.com/START26D/problems/LOSTSEQ
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }

        if (sum % 2 == 0)
            cout << "NO\n";

        else
            cout << "YES\n";
    }

    return 0;
}