/*
    LINK:   https://www.codechef.com/COOK140D/problems/DIGSMPAR
*/

#include <iostream>
using namespace std;

int digitSum(int n)
{
    int temp = n;
    int sum = 0;

    while (temp != 0)
    {
        int rem = temp % 10;

        sum = sum + rem;

        temp = temp / 10;
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (digitSum(n) % 2 == 0)
        {
            if (digitSum(n + 1) % 2 != 0)
                cout << (n + 1) << "\n";

            else
                cout << (n + 2) << "\n";
        }

        else
        {
            if (digitSum(n + 1) % 2 == 0)
                cout << (n + 1) << "\n";

            else
                cout << (n + 2) << "\n";
        }
    }

    return 0;
}