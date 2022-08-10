/*
    LINK:   https://www.codechef.com/CCSTART2/problems/ADDNATRL
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << sum << "\n";

    return 0;
}