/*
    LINK:   https://www.codechef.com/COOK137C/problems/PIZZA_BURGER
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        if (x > n && y > n)
            cout << "NOTHING\n";

        else if (y <= n && x > n)
            cout << "BURGER\n";

        else
            cout << "PIZZA\n";

    }

    return 0;
}