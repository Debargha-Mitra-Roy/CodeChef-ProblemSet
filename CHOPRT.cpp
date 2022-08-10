/*
    LINK:   https://www.codechef.com/problems/CHOPRT
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        char ch;

        if (a > b)
            ch = '>';

        else if (a < b)
            ch = '<';

        else
            ch = '=';

        cout << ch << "\n";
    }

    return 0;
}