/*
    LINK:   https://www.codechef.com/problems/CHEFST
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n1, n2, m;
        cin >> n1 >> n2 >> m;

        m = (m * (m + 1)) / 2;

        long long int count = 0;

        if (m <= min(n1, n2))
            count = (n1 + n2) - (2 * m);

        else
            count = (n1 + n2) - (2 * min(n1, n2));

        cout << count << "\n";
    }

    return 0;
}