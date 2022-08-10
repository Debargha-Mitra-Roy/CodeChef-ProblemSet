/*
    LINK:   https://www.codechef.com/CCSTART2/problems/DIFACTRS
*/

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, i;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    cout << count << "\n";

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }

    return 0;
}