/*
    LINK:   https://www.codechef.com/START31D/problems/GROUPASSGN
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int ans  = (2 * n) - x + 1;

        cout << ans << "\n";
    }

    return 0;
}