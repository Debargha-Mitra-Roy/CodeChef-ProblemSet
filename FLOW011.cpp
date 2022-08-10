/*
    LINK:   https://www.codechef.com/problems/FLOW011
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float basic;
        cin >> basic;

        float hra, da, total = 0;

        if (basic < 1500)
        {
            hra = (basic / 10);
            da = (basic * 9) / 10;

            total = basic + hra + da;
        }

        else
        {
            hra = 500;
            da = (basic * 98) / 100;

            total = basic + hra + da;
        }

        cout << fixed << setprecision(2) << total << "\n";
    }

    return 0;
}