/*
	LINK:	https://www.codechef.com/FOUR21C/problems/S02E10
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int diff = abs(a[i] - b[i]);

            if (diff <= k)
                count++;
        }

        if (count >= x)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}