/*
    LINK:   https://www.codechef.com/HWRD2021/problems/JEEADVD
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, x, y, z;
        cin >> m >> x >> y >> z;

        if (m <= x && m < y && m < z)
            cout << "CSE\n";

        else if (m > x && m <= y && m < z)
            cout << "ECE\n";

        else if (m > x && m > y && m <= z)
            cout << "Other Branch\n";

        else
            cout << "Better luck next time\n";
    }

    return 0;
}