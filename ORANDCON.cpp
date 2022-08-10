/*
    LINK:   https://www.codechef.com/START24C/problems/ORANDCON
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

		int a = n;
		int b = n + (1 << 27);
		int c = 0;

		cout << a << " " << b << " " << c << "\n";
	}

	return 0;
}