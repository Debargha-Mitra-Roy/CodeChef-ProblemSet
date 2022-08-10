/*
    LINK:   https://www.codechef.com/problems/FLOW016
*/

#include <iostream>
using namespace std;

long long int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

long long int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << gcd(a, b) << " " << lcm(a, b) << "\n";
    }

    return 0;
}