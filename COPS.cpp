/*
    LINK:	https://www.codechef.com/submit/COPS
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, x, y;
        cin >> m >> x >> y;

        vector<int> houses(m);
        for (int i = 0; i < m; i++)
        {
            cin >> houses[i];
        }

        int xy = x * y;
        int left = 0, right = 0;

        vector<pair<int, int>> search;

        for (int i = 0; i < m; i++)
        {
            left = houses[i] - xy;
            right = houses[i] + xy;

            if (left <= 1)
                left = 1;

            if (right >= 100)
                right = 100;

            search.push_back({left, right});
        }

        int isVisited[105] = {0};

        for (auto it : search)
        {
            for (int i = it.first; i <= it.second; i++)
            {
                isVisited[i] = 1;
            }
        }

        int count = 0;

        for (int i = 1; i <= 100; i++)
        {
            if (isVisited[i] == 0)
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}