/*
    LINK:   https://www.codechef.com/START24C/problems/BADMINTON
*/

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int ans = (n / 2) + 1;

		cout << ans << "\n";
	}

	return 0;
}