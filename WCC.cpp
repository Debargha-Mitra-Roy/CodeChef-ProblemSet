/*
    LINK:   https://www.codechef.com/FEB222C/problems/WCC
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        string s;
        cin >> s;

        int carlsen = 0, draw = 0, chef = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'C')
                carlsen++;

            if (s[i] == 'D')
                draw++;

            if (s[i] == 'N')
                chef++;
        }

        int prize = 0;

        if (carlsen > chef)
            prize = (x * 60);

        else if (carlsen == chef)
            prize = (x * 55);

        else
            prize = (x * 40);

        cout << prize << "\n";
    }

    return 0;
}