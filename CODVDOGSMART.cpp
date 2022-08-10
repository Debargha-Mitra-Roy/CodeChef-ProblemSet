/*
	LINK:	https://www.codechef.com/CVTA2021/problems/CODVDOGSMART
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int ans = n % k;

        cout << ans << "\n";
    }

    return 0;
}