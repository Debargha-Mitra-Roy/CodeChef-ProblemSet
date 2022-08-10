/*
    LINK:   https://www.codechef.com/START21C/problems/COVID_19
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int seats = ((n + 1) / 2) * ((m + 1) / 2);

        cout << seats << endl;
    }

    return 0;
}