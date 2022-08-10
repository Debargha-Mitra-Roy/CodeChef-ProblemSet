/*
    LINK:   https://www.codechef.com/problems/REMISS
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

        int min = max(a, b);
        int max = a + b;

        cout << min << " " << max << "\n";
    }

    return 0;
}