/*
    LINK:   https://www.codechef.com/START51D/problems/DIFFMED
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

        int small = 1, large = n;

        for (int i = 1; i <= n; i++)
        {
            if (i & 1)
                cout << large-- << " ";

            else
                cout << small++ << " ";
        }

        cout << "\n";
    }
    
    return 0;
}