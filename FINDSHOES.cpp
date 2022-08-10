/*
    LINK:   https://www.codechef.com/START32D/problems/FINDSHOES
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n > m)
        cout << abs(n - m) + n << "\n";

    else
        cout << n << "\n";

    return 0;
}