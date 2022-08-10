/*
    LINK:   https://www.codechef.com/START24C/problems/ANTI_PAL
*/

#include <iostream>
#include <array>
#include <algorithm>
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

        array<int, 26> count{};

        for (char c : s)
        {
            count[c - 'a']++;
        }

        if (n % 2 == 1 || *max_element(count.begin(), count.end()) > n / 2)
            cout << "NO\n";

        else
        {
            cout << "YES\n";

            sort(s.begin(), s.end());
            reverse(s.begin() + n / 2, s.end());

            cout << s << "\n";
        }
    }

    return 0;
}