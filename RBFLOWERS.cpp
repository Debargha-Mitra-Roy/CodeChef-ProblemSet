/*
    LINK:   https://www.codechef.com/submit/RBFLOWERS
*/

#include <iostream>
using namespace std;

int n, ans;
int r[102], b[102];
int a[102][200001];

void dfs(int x, int y, int index)
{
    if (index == n + 1)
    {
        ans = max(ans, min(x, y));
        return;
    }

    if (a[index][x] >= y && a[index][x] != 0)
        return;

    a[index][x] = y;

    dfs(x + r[index], y, index + 1);
    dfs(x, y + b[index], index + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            cin >> r[i];
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        ans = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < 200001; j++)
            {
                a[i][j] = 0;
            }
        }

        dfs(0, 0, 1);

        cout << ans << "\n";
    }

    return 0;
}