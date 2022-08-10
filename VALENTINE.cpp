/*
    LINK:   https://www.codechef.com/START26D/problems/VALENTINE
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int total = (x / y);

        cout << total << "\n";
    }

    return 0;
}