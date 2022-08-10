/*
    LINK:   https://www.codechef.com/JAN221C/problems/KEPLERSLAW
*/

#include <iostream>
using namespace std;

int pow(int number, int base)
{
    int power = 1;

    for (int i = 1; i <= base; i++)
    {
        power = power * number;
    }

    return power;
}

bool keplarsLaw(int t1, int t2, int r1, int r2)
{
    int t1_sq = pow(t1, 2);
    int t2_sq = pow(t2, 2);

    int r1_cu = pow(r1, 3);
    int r2_cu = pow(r2, 3);

    int first = t1_sq * r2_cu;
    int second = t2_sq * r1_cu;

    if (first == second)
        return true;

    else
        return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;

        if (keplarslaw(t1, t2, r1, r2))
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}