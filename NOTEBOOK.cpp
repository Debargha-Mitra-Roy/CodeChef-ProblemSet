/*
    LINK:   https://www.codechef.com/START26D/problems/NOTEBOOK
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int pages = (n * 1000);
        int notebooks = pages / 100;

        cout << notebooks << "\n";
    }

    return 0;
}