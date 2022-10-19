/*
    LINK:   https://www.codechef.com/LP1TO201/problems/SMOL
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;

        if (k == 0)
            cout << n << "\n";

        else
            cout << n % k << "\n";
    }

    return 0;
}