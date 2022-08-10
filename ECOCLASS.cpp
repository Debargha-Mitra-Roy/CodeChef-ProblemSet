/*
    LINK:   https://www.codechef.com/START31D/problems/ECOCLASS
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
        int n;
        cin >> n;

        int count = 0;
        vector<int> v1(n), v2(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (v1[i] == v2[i])
                count++;

            else
                continue;
        }

        cout << count << "\n";
    }

    return 0;
}