/*
    LINK:   https://www.codechef.com/JAN221C/problems/PINBS
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        int n = str.length();

        int count = 0;
        if (n <= 1)
            cout << "NO\n";

        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((str[i] == '1' && str[i + 1] == '0') || (str[i] == '1' && str[i + 1] == '1'))
                    count++;

                else
                    continue;
            }

            if (count >= 1)
                cout << "YES\n";

            else
                cout << "NO\n";
        }
    }

    return 0;
}