/*
    LINK:   https://www.codechef.com/problems/FLOW018
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

        long long int count = 1;

        for (int i = 1; i <= n; i++)
        {
            count = count * i;
        }

        cout << count << "\n";
    }

    return 0;
}