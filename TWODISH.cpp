/*
    LINK:   https://www.codechef.com/LP1TO201/problems/TWODISH
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        if (b < n)
            cout << "NO\n";

        else
        {
            if (a + c < n)
                cout << "NO\n";

            else
                cout << "YES\n";
        }
    }

    return 0;
}