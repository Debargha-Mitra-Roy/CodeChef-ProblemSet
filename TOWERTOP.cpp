/*
    LINK:   https://www.codechef.com/START25C/problems/TOWERTOP
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, m;
        cin >> x >> m;

        long long int min = ceil(log2(x)) + 1;

        int ans = 0;

        if (m < min)
            cout << "0\n";

        else
            cout << (m - min + 1) << "\n";
    }

    return 0;
}