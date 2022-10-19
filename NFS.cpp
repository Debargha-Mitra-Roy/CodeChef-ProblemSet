/*
    LINK:   https://www.codechef.com/LP1TO201/problems/NFS
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double u, v, a, s;
        cin >> u >> v >> a >> s;

        if (u == 1 && v == 1)
            cout << "YES\n";

        else
        {
            double ans = sqrt((u * u) - (2 * a * s));

            if (ans > v)
                cout << "NO\n";

            else
                cout << "YES\n";
        }
    }

    return 0;
}