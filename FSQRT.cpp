/*
    LINK:   https://www.codechef.com/problems/FSQRT
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
        int n;
        cin >> n;

        int ans = sqrt(n);

        cout << ans << "\n";
    }

    return 0;
}