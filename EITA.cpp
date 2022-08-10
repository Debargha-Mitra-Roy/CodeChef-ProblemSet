/*
    LINK:   https://www.codechef.com/JULY21C/problems/EITA
*/


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, x, y, z;
        cin >> d >> x >> y >> z;

        int eventually_work = 7 * x;
        int n = 7 - d;
        int uneventually_work = (d * y) + (n * z);

        cout << max(eventually_work, uneventually_work) << "\n";
    }

    return 0;
}