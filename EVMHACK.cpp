/*
    LINK:   https://www.codechef.com/START24C/problems/EVMHACK
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[3], p[3];
		for (int i = 0; i < 3; ++i)
		{
			cin >> a[i];
		}

		for (int i = 0; i < 3; ++i)
		{
			cin >> p[i];
		}

		int max = abs(a[0] - p[0]);

		int index = 0;
		double counta = 0, countp = 0;

		for (int i = 0; i < 3; i++)
		{
			counta = counta + a[i];
			countp = countp + p[i];

			if (abs(a[i] - p[i]) >= max)
			{
				max = abs(a[i] - p[i]);
				index = i;
			}

			else
				continue;
		}

		int sum = counta - a[index] + p[index];

		double win = (countp / 2);

		if (counta > win || sum > win)
			cout << "YES\n";

		else
			cout << "NO\n";
	}

	return 0;
}