/*
    LINK:   https://www.codechef.com/INFI21C/problems/MARBLE
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

        string s, p;
        cin >> s >> p;

        int count = n;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == p[i] && s[i] != '?' && p[i] != '?')
                count--;

            else
                continue;
        }

        cout << count << "\n";
    }

    return 0;
}