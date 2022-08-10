/*
    LINK:   https://www.codechef.com/COOK140D/problems/DIGARR
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

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '5' || s[i] == '0')
            {
                count = -1;
                break;
            }
        }

        if (count == -1)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}