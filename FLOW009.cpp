/*
    LINK:   https://www.codechef.com/problems/FLOW009
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
        int x, y;
        cin >> x >> y;

        double sum = x * y;

        if (x >= 1000)
            sum = sum - (sum / 10);

        cout << fixed << setprecision(6) << sum << "\n";
    }

    return 0;
}