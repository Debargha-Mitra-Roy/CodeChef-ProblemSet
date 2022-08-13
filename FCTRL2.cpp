/*
    LINK:   https://www.codechef.com/problems/FCTRL2
*/

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

const int MOD = 100000009;

cpp_int factorial(int n)
{
    if (n == 1)
        return 1;

    return (n * factorial(n - 1));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << factorial(n) << "\n";
    }

    return 0;
}