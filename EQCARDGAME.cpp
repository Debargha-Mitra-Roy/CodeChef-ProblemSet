/*
    LINK:   https://www.codechef.com/START22C/problems/EQCARDGAME
*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;

        int count = 52 % k;

        cout << count << "\n";
    }

    return 0;
}