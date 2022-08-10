/*
    LINK:   https://www.codechef.com/problems/AMR15A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    pair<int, int> p = {0, 0};

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            p.first++;

        else
            p.second++;
    }

    if (p.first > p.second)
        cout << "READY FOR BATTLE\n";

    else
        cout << "NOT READY\n";


    return 0;
}