/*
    LINK:   https://www.codechef.com/START21C/problems/DEVSPORTS
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int z, y, a, b, c;
        cin >> z >> y >> a >> b >> c;

        int rem = z - y;
        int cost = a + b + c;

        if (rem < cost)
            cout << "NO\n";

        else
            cout << "YES\n";
    }

    return 0;
}