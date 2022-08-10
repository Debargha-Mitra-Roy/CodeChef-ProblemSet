/*
    LINK:   https://www.codechef.com/problems/TLG
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v1(n), v2(n), temp, flag;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i] >> v2[i];
    }

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + v1[i];
        sum2 = sum2 + v2[i];

        int x = (sum1 - sum2);
        int y = abs(sum1 - sum2);

        temp.push_back(x);
        flag.push_back(y);
    }

    int max = flag[0];
    int index = 0;

    for (int i = 0; i < flag.size(); i++)
    {
        if (flag[i] >= max)
        {
            max = flag[i];
            index = i;
        }

        else
            continue;
    }

    int w = 2;

    if (temp[index] > 0)
        w = 1;

    sort(flag.begin(), flag.end());

    cout << w << " " << flag[n - 1] << "\n";


    return 0;
}