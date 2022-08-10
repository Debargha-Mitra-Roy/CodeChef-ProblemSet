/*
    LINK:   https://www.codechef.com/MARCH222D/problems/CHEFRACES
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3);

    for (int i = 0; i < 4; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int count = 2;

    for (int i = 0; i < 3; ++i)
    {
        if (v[i] == v[i + 1])
            count--;
    }

    cout << count << "\n";

    return 0;
}