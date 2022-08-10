/*
    LINK:   https://www.codechef.com/NOV21C/problems/CHEAPFUEL
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;

        int m = x + (k * a);
        int n = y + (k * b);

        if (m == n)
            cout << "SAME PRICE\n";
        
        if (m < n)
            cout << "PETROL\n";
        
        if (m > n)
            cout << "DIESEL\n";
    }

    return 0;
}