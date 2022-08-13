/*
    LINK:   https://www.codechef.com/START51D/problems/TVDISC
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if ((a - c) < (b - d))
            cout << "First\n";

        else if ((a - c) > (b - d))
            cout << "Second\n";

        else
            cout << "Any\n";
    }

    return 0;
}