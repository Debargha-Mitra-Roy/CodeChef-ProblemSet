/*
    LINK:   https://www.codechef.com/START56D/problems/NEARESTEXIT
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

        if (n <= 50)
            cout << "LEFT\n";

        else
            cout << "RIGHT\n";
    }

    return 0;
}