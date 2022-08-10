/*
    LINK:   https://www.codechef.com/START32D/problems/COURSEREG
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int diff = abs(n - m);

    if (diff >= k)
        cout << "YES" << "\n";

    else
        cout << "NO" << "\n";

    return 0;
}