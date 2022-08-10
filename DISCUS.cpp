/*
    LINK:   https://www.codechef.com/MARCH221C/problems/DISCUS
*/

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		int maxx = max(a, b);
		int ans = max(maxx, c);

		cout << ans << endl;
	}

	return 0;
}