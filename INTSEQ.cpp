/*
    LINK:   https://www.codechef.com/START22C/problems/INTSEQ
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;

        int count = 0;

        while (k % 2 == 0)
        {
            count++;
            k = k / 2;
        }

        cout << count << "\n";
    }

    return 0;
}