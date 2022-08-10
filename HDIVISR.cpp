/*
    LINK:   https://www.codechef.com/CCSTART/problems/HDIVISR
*/

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        if (n % i == 0)
            count = i;
    }
    cout << count << "\n";

    return 0;
}