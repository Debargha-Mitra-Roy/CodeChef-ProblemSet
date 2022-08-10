/*
    LINK:   https://www.codechef.com/problems/INTEST
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int count = 0;

    while (n--)
    {
        int x;
        cin >> x;


        if (x % k == 0)
            count++;
    }

    cout << count << "\n";

    return 0;
}