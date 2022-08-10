/*
    LINK:   https://www.codechef.com/problems/T20MCH
*/

#include <iostream>
using namespace std;

int main()
{
    int r, o, c;
    cin >> r >> o >> c;

    int rem = (20 - o);
    int remBall = (rem * 6);
    int remRun = (r - c);
    int maxRun = (remBall * 6);

    if (maxRun > remRun)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}