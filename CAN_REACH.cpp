/*
	LINK:	https://www.codechef.com/FZBZ21C/problems/CAN_REACH
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        if (x % k == 0 && y % k == 0)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}