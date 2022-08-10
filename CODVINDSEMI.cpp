/*
	LINK:	https://www.codechef.com/CVTA2021/problems/CODVINDSEMI
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int ans = x + (z * 2);

        if (ans >= y)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}