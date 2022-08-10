/*
    LINK:   https://www.codechef.com/problems/COUPON2
*/

#include <iostream>
using namespace std;

bool coupon(int d, int c, int a1, int a2, int a3, int b1, int b2, int b3)
{
    int a = a1 + a2 + a3;
    int b = b1 + b2 + b3;

    int coup = c;
    int delv = d + d;

    if (a < 150)
        coup = coup + d;

    if (b < 150)
        coup = coup + d;

    if (coup < delv)
        return true;

    else
        return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, c, a1, a2, a3, b1, b2, b3;
        cin >> d >> c >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        if (coupon(d, c, a1, a2, a3, b1, b2, b3))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;

    }

    return 0;
}