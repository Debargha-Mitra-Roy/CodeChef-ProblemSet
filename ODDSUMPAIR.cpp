/*
    LINK:   https://www.codechef.com/submit/ODDSUMPAIR
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(3);

        int odd = 0, even = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];

            if (v[i] % 2 == 0)
                odd++;

            else
                even++;
        }

        if (odd == 3 || even == 3)
            cout << "NO\n";

        else
            cout << "YES\n";
    }

    return 0;
}