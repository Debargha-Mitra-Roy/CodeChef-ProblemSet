/*
    LINK:   https://www.codechef.com/JULY21C/problems/RELATIVE
*/


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int g, c;
        cin >> g >> c;

        long long int v = ceil(pow(c, 2)); // ceil() function for ignore the rounding off error
        long long int h = v / (2 * g);
        
        cout << h << "\n";
    }

    return 0;
}