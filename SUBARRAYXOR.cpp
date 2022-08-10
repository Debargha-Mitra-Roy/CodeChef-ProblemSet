/*
    LINK:   https://www.codechef.com/START23C/problems/SUBARRAYXOR
*/

#include <iostream>
#include <vector>
using namespace std;

const int limit = 1e5 + 10;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(limit);

        v[1] = 1;

        for (int i = 2; i < limit; i++)
        {
            int x = i ^ (i - 1);

            v[i] = x;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}