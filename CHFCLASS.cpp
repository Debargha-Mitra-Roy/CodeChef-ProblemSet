/*
    LINK:   https://www.codechef.com/MARCH221C/problems/WORDLE
*/

#include<iostream>
using namespace std;

void printbinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n <= 5)
            cout << "0" << endl;

        else
            cout << ((n - 6) / 7) + 1 << endl;
    }

    return 0;
}