/*
    LINK:   https://www.codechef.com/EXUN21C/problems/SUMPARITY
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;

        if (a % 2 == 0) // Checking whether a is even
        {
            if (n == 1)
                cout << "Even" << "\n"; // Checking whether n is equal to 1

            else
                cout << "Impossible" << "\n"; // If n !=1, the answer is Impossible
        }

        else
        {
            if (n % 2 == 0)
                cout << "Even" << "\n"; // If n is even , the answer is also Even

            else
                cout << "Odd" << "\n"; // Else, the answer is Odd
        }
    }

    return 0;
}