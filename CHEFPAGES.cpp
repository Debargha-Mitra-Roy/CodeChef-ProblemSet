/*
    LINK:   https://www.codechef.com/COOK140D/problems/CHEFPAGES
*/

#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    if (n == 0)
        cout << "https://www.codechef.com/practice" << "\n";

    else
    {
        if (x == 0)
            cout << "https://www.codechef.com/contests" << "\n";

        else
            cout << "https://discuss.codechef.com" << "\n";
    }

    return 0;
}