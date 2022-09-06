/*
    LINK:   https://www.codechef.com/LP1TO201/problems/VDATES
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (n >= a && n <= b)
            cout << "Take second dose now\n";

        else if (n < a && n < b)
            cout << "Too Early\n";

        else if (n > a && n > b)
            cout << "Too Late\n";
    }

    return 0;
}