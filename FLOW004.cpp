/*
    LINK:   https://www.codechef.com/problems/FLOW004
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

        int last = n % 10;

        while (n >= 10)
        {
            n = n / 10;
        }

        int first = n;

        int ans = first + last;

        cout << ans << "\n";
    }

    return 0;
}