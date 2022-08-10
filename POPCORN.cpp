/*
    LINK:   https://www.codechef.com/EXUN21C/problems/POPCORN
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

        long long int sum = 0;

        if (a1 + a2 >= b1 + b2 && a1 + a2 >= c1 + c2)
            sum = a1 + a2;

        else if (b1 + b2 >= a1 + a2 && b1 + b2 >= c1 + c2)
            sum = b1 + b2;

        else
            sum = c1 + c2;

        cout << sum << "\n";
    }

    return 0;
}