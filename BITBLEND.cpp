/*
    LINK:   https://www.codechef.com/START51D/problems/POPULATION
*/

#include <iostream>
#include <array>
#include <vector>
#include <assert.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        bool all_even = 1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] % 2)
                all_even = 0;
        }

        if (all_even)
        {
            cout << -1 << '\n';
            continue;
        }

        int x = 0, delta = 0;

        for (int i = 0; i < n; i++)
        {
            if ((arr[i] % 2) != (i % 2))
                x++;
        }

        if (x > n - x)
            delta = 1;

        int ind = -1;

        for (int i = 0; i < n; i++)
        {
            if ((arr[i] % 2) and ((i + delta) % 2))
            {
                ind = i;
                break;
            }
        }

        assert(ind != -1);
        vector<array<int, 2>> ops;

        for (int i = 0; i < n; i++)
        {
            if ((arr[i] % 2) != ((i + delta) % 2))
            {
                ops.push_back({i + 1, ind + 1});
            }
        }

        cout << (int)ops.size() << '\n';

        assert((int)ops.size() == min(x, n - x));

        for (auto inds : ops)
        {
            cout << inds[0] << " " << inds[1] << '\n';
        }
    }

    return 0;
}