/*
    LINK:   https://www.codechef.com/START23C/problems/AVGOF3
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int avg;
        cin >> avg;

        int n = 3 * avg;

        int a = 0, b = 0, c = 0;

        a = (n / 3) + 1;
        b = n / 3;
        c = (n / 3) - 1;

        cout << a << " " << b << " " << c << "\n";
    }

    return 0;
}