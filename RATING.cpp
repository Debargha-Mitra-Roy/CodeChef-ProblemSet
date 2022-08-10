/*
    LINK:   https://www.codechef.com/MARCH222D/problems/RATING
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 0)
        cout << abs(n) - 1 << endl;

    else
        cout << -(n + 1) << endl;

    return 0;
}