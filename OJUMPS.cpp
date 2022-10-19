/*
    LINK:   https://www.codechef.com/submit/OJUMPS
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if (n % 3 == 0 || n % 6 == 1)
        cout << "yes\n";

    else
        cout << "no\n";

    return 0;
}