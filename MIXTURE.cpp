/*
    LINK:   https://www.codechef.com/OCT21C/problems/MIXTURE
*/


#include <iostream>
using namespace std;

void mixture(int a, int b)
{
    if (a > 0 && b > 0)
        cout << "Solution\n";

    if (a == 0)
        cout << "Liquid\n";

    if (b == 0)
        cout << "Solid\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        
        mixture(a, b);
    }

    return 0;
}