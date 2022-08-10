/*
    LINK:   https://www.codechef.com/JAN222C/problems/CRYCOLR
*/

#include <iostream>
using namespace std;

int max(int *a, int *b)
{
    if (*a >= *b)
        return *a;

    else
        return *b;
}

int cryingColor(int n, int r1, int r2, int r3, int g1, int g2, int g3, int b1, int b2, int b3)
{
    int color1 = g1 + b1 + b2;
    int color2 = r2 + r3 + g3;

    int count = (r1 + g2 + b3);

    if (count / 3 == n)
        return 0;

    else
        return max(color1, color2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int r1, r2, r3, g1, g2, g3, b1, b2, b3;
        cin >> r1 >> g1 >> b1;
        cin >> r2 >> g2 >> b2;
        cin >> r3 >> g3 >> b3;

        int ans = cryingColor(n, r1, r2, r3, g1, g2, g3, b1, b2, b3);

        cout << ans << "\n";
    }

    return 0;
}