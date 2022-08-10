/*
    LINK:   https://www.codechef.com/LTIME106C/problems/MINCOINS
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        if (x % 5 != 0)
            cout << "-1\n";

        else
        {
            if (x % 10 == 0)
                cout << (x / 10) << "\n";

            else if (x % 5 == 0)
                cout << (x / 10) + 1 << "\n";
        }
    }

    return 0;
}