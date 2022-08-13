/*
    LINK:   https://www.codechef.com/START20C/problems/ANTIPAL
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

        if (n % 2 != 0)
            cout << "-1\n";

        else
        {
            for (int i = 1; i <= n / 2; i++)
            {
                str = str + "01";
            }
            cout << str << "\n";
        }
    }

    return 0;
}