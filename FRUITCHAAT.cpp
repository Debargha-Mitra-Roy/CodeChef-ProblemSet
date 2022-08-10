/*
    LINK:   https://www.codechef.com/START25C/problems/FRUITCHAAT
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

		int banana = (x / 2);
		int apple = y;

		if (banana <= apple)
			cout << banana << "\n";

		else
			cout << apple << "\n";
	}


	return 0;
}