/*
    LINK:   https://www.codechef.com/problems/FLOW014
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int hardness, tensile;
        float carbon;
        cin >> hardness >> carbon >> tensile;

        int h = 0, c = 0, t = 0;

        if (hardness > 50)
            h = 1;

        if (carbon < 0.7)
            c = 1;

        if (tensile > 5600)
            t = 1;

        if (h == 1 && c == 1 && t == 1)
            cout << "10\n";

        else if (h == 1 && c == 1)
            cout << "9\n";

        else if (c == 1 && t == 1)
            cout << "8\n";

        else if (h == 1 && t == 1)
            cout << "7\n";

        else if (h == 1 || c == 1 || t == 1)
            cout << "6\n";

        else
            cout << "5\n";
    }

    return 0;
}