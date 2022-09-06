/*
    LINK:   https://www.codechef.com/LP1TO201/problems/IMDB
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
        int n, x;
        cin >> n >> x;

        vector<int> s(n), r(n);

        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> r[i];
        }

        if (n == 1)
        {
            if (x >= s[0])
                cout << r[0] << "\n";

            else
                cout << "0\n";
        }

        else
        {
            int maximum = 0;

            for (int i = 0; i < n; i++)
            {
                if (x >= s[i])
                    maximum = max(maximum, r[i]);
            }

            cout << maximum << "\n";
        }
    }

    return 0;
}