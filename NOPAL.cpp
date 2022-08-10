/*
    LINK:   https://www.codechef.com/COOK137C/problems/NOPAL
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

        string str = "";
        char curr = 'a';

        for (int i = 0; i < n; i++)
        {
            str = str + curr;
            curr++;

            if (curr == 'd')
                curr = 'a';
        }

        cout << str << "\n";
    }

    return 0;
}