/*
    LINK:   https://www.codechef.com/MARCH221C/problems/CHFDBT
*/

#include <iostream>
#define mod (int)(998244353)
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;

        for (int i = 0;  i <= n; i++)
        {
            if (i & 1)
                count++;
        }

        cout << (count % mod) << endl;
    }

    return 0;
}