/*
    LINK:   https://www.codechef.com/problems/FLOW006
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

        int sum = 0;

        while (n != 0)
        {
            int rem = n % 10;

            sum = sum + rem;

            n = n / 10;
        }

        cout << sum << "\n";
    }

    return 0;
}