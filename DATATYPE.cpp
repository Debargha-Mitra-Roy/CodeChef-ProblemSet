/*
    LINK:   https://www.codechef.com/START25C/problems/DATATYPE
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

		if (x >= y)
			cout << y << "\n";

		else
		{
			while (x <= y)
			{
				y = (y - x) - 1;
			}

			if (y < 0)
				y = x;

			cout << y << "\n";
		}
	}

	return 0;
}