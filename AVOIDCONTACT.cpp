/*
    LINK:   https://www.codechef.com/START24C/problems/AVOIDCONTACT
*/

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;

		int count = 0;

		if (y == 0)
			count = x;

		else if (x == y)
			count = x + y - 1;

		else
			count = x + y;

		cout << count << "\n";
	}

	return 0;
}