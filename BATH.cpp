/*
    LINK:   https://www.codechef.com/MARCH221C/problems/BATH
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int bath = (2 * y);
        int ans = (x / bath);

        cout << ans << endl;
    }

    return 0;
}