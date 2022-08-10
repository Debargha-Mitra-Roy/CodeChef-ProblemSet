/*
    LINK:   https://www.codechef.com/problems/PPSUM
*/

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
        return 1;

    return (n + sum(n - 1));
}

int sumTimes(int d, int n)
{
    if (d == 0)
        return n;

    return sumTimes(d - 1, sum(n));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, n;
        cin >> d >> n;

        cout << sumTimes(d,  n) << "\n";
    }

    return 0;
}