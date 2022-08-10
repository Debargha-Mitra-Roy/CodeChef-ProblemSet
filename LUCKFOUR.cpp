/*
    LINK:   https://www.codechef.com/problems/LUCKFOUR
*/

#include <iostream>
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

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '4')
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}