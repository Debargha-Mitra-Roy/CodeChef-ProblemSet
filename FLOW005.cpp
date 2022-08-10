/*
    LINK:   https://www.codechef.com/problems/FLOW005
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int>v = {100, 50, 10, 5, 2, 1};

        int count = 0;

        for (int i = 0; i < 6; i++)
        {
            count = count + (n / v[i]);

            n = n - (v[i] * (n / v[i]));
        }

        cout << count << "\n";

    }

    return 0;
}