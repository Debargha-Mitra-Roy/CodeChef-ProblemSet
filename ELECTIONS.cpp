/*
    LINK:   https://www.codechef.com/START22C/problems/ELECTIONS
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a > 50 || b > 50 || c > 50)
        {
            if (a > b && a > c)
                cout << "A\n";

            else if (b > a && b > c)
                cout << "B\n";

            else if (c > a && c > b)
                cout << "C\n";

            else
                cout << "NOTA\n";
        }

        else
            cout << "NOTA\n";
    }

    return 0;
}