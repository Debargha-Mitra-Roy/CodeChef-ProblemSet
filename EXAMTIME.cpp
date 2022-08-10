/*
    LINK:   https://www.codechef.com/JAN222C/problems/EXAMTIME
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dsa1, dsa2, toc1, toc2, dm1, dm2;
        cin >> dsa1 >> toc1 >> dm1;
        cin >> dsa2 >> toc2 >> dm2;

        int dragon = dsa1 + toc1 + dm1;
        int sloth = dsa2 + toc2 + dm2;

        if (dragon > sloth)
            cout << "DRAGON\n";

        else if (dragon < sloth)
            cout << "SLOTH\n";

        else if (dsa1 != dsa2 || toc1 != toc2)
        {
            if (dsa1 > dsa2)
                cout << "DRAGON\n";

            else if (dsa1 < dsa2)
                cout << "SLOTH\n";

            else if (dsa1 == dsa2)
            {
                if (toc1 > toc2)
                    cout << "DRAGON\n";

                else
                    cout << "SLOTH\n";
            }
        }

        else
            cout << "TIE\n";
    }

    return 0;
}