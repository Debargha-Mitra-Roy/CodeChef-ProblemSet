/*
    LINK:   https://www.codechef.com/LTIME103C/problems/CHEF1010
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

        string s;
        cin >> s;

        int count_zero = 0;
        int count_one = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                count_zero++;

            if (s[i] == '1')
                count_one++;
        }

        if (count_zero == 0 || count_one == 0)
            cout << "0\n";

        else if (count_zero < count_one)
            cout << count_zero - 1 << "\n";

        else
            cout << count_one - 1 << "\n";
    }

    return 0;
}