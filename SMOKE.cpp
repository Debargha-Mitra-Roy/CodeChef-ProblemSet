/*
    LINK:   https://www.codechef.com/START26D/problems/SMOKE
*/

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int ans = INT_MAX;

        for (int bus = 0; bus <= ceil(n / 100.0); bus++)
        {
            int car = max((double)0, ceil((n - (bus * 100)) / 4.0));

            int smoke = (bus * x) + (car * y);

            ans = min(ans, smoke);
        }

        cout << ans << "\n";
    }

    return 0;
}