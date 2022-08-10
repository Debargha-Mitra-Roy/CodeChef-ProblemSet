/*
    LINK:   https://www.codechef.com/problems/MUFFINS3
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

        int ans = n / 2;

        cout << ans + 1 << "\n";
    }

    return 0;
}