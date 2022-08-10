/*
    LINK:   https://www.codechef.com/LTIME102C/problems/MINPIZZAS
*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        cout << n / gcd(n, k) << "\n";
    }

    return 0;
}