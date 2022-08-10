/*
    LINK:   https://www.codechef.com/CCSTART2/problems/SUMEVOD
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n, odd = 0, even = 0;
    cin >> n;

    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        if (i % 2 != 0)
            odd = odd + i;
    }

    for (int i = 1; i <= (2 * n); i++)
    {
        if (i % 2 == 0)
            even = even + i;
    }

    cout << odd << " " << even << "\n";

    return 0;
}