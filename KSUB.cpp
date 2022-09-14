/*
    LINK:   https://www.codechef.com/START56D/problems/KSUB
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        int allGCD = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            allGCD = __gcd(allGCD, v[i]);
        }

        int index = 0, curr = 0, temp = 0;

        while (index < n && temp < k)
        {
            curr = 0;

            while (index < n && curr != allGCD)
            {
                curr = __gcd(curr, v[index]);
                index++;
            }

            if (curr == allGCD)
                temp++;
        }

        if (temp == k)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}