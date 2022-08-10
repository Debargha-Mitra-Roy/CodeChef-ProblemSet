/*
    LINK:   https://www.codechef.com/problems/DIFFSUM
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;

    if (a > b)
        ans = a - b;

    else
        ans = a + b;

    cout << ans << "\n";

    return 0;
}