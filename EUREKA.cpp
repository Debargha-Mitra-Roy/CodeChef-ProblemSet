/*
    LINK:   https://www.codechef.com/FEB221C/problems/EUREKA
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
        double n;
        cin >> n;

        double x = (0.143 * n);

        double possibility = pow(x, (int)n);
        double ans = floor(possibility + 0.5);

        cout << ans << "\n";
    }

    return 0;
}