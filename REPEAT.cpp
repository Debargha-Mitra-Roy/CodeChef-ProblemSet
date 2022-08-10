/*
    LINK:   https://www.codechef.com/problems/REPEAT
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s;
        cin >> n >> k >> s;

        int ans = (s - (n * n)) / (k - 1);

        cout << ans << "\n";
    }

    return 0;
}