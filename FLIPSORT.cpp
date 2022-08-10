/*
     LINK:   https://www.codechef.com/START32D/problems/FLIPSORT
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string temp = s;

    sort(temp.begin(), temp.end());

    vector<vector<int>> v;

    int index = 0;

    if (temp == s)
        cout << 0 << "\n";

    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                index = i + 1;

                for (int j = 0; j < i + 1; j++)
                {
                    if (s[j] == '1')
                        s[j] = '0';

                    else
                        s[j] = '1';
                }

                v.push_back({1, index});
            }
        }

        int len = v.size();
        cout << len << "\n";

        for (auto index : v)
        {
            cout << index[0] << " " << index[1] << "\n";
        }
    }

    return 0;
}