/*
	LINK:	https://www.codechef.com/FZBZ21C/problems/COMPCAND
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

        int count = 0;

        if (n > 0 && n >= k)
        {
            if (n % k == 0)
                count = n / k;

            else
                count = -1;
        }

        else
            count = 0;

        cout << count << "\n";
    }

    return 0;
}