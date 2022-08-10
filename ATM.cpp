/*
    LINK:   https://www.codechef.com/problems/HS08TEST
*/

#include <iostream>
#include <iomanip>
using namespace std;

float transaction(int x, float y)
{
    float min = y - 0.50;
    float amount;

    /* Successful Transaction */
    if (x <= y - 0.50 && x % 5 == 0)
        amount = (y - x - 0.50);

    /* Insufficient Funds and Incorrect Withdrawal Amount (not multiple of 5) */
    else
        amount = y;

    return amount;
}

int main()
{
    int x;
    float y;
    cin >> x >> y;

    cout << fixed << setprecision(2) << transaction(x, y) << "\n";

    return 0;
}