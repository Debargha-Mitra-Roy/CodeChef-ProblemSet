/*
    LINK:   https://www.codechef.com/MARCH222D/problems/INCRIQ
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int iq = (n + 7);

    if (iq > 170)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}