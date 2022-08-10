/*
    LINK:   https://www.codechef.com/problems/DECINC
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    if (n % 4 == 0)
        ans = n + 1;

    else
        ans = n - 1;

    cout << ans << "\n";

    return 0;
}