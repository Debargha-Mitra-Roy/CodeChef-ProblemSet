/*
	LINK:	https://www.codechef.com/CVTA2021/problems/CODVDOGSUM
*/

#include <iostream>
using namespace std;

int sum(int d, int n)
{
    int temp, rem, mem = n;
    while (d != 0)
    {
        rem = (mem * (mem + 1)) / 2;
        temp = rem;
        mem = temp;
        d--;
    }

    return mem;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, n;
        cin >> d >> n;

        cout << sum(d, n) << "\n";
    }

    return 0;
}