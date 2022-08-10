/*
    LINK:   https://www.codechef.com/problems/FGFS
*/

#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        map <int, set <pair<int, int>>> mp;

        for (int i = 0; i < n; i++)
        {
            int arrivalTime, deptTime, comp;
            cin >> arrivalTime >> deptTime >> comp;

            mp[comp].insert({deptTime, arrivalTime});
        }

        int count = 0;

        for (auto innerMap : mp)
        {
            int lastDeptTime = 0;

            for (auto innerPair : innerMap.second)
            {
                if (innerPair.second >= lastDeptTime)
                {
                    count++;
                    lastDeptTime = innerPair.first;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}