/*
    LINK:   https://www.codechef.com/submit/MINLCS
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string str1, str2;
        cin >> str1 >> str2;

        unordered_map<char, int> mpp1, mpp2;

        for (int i = 0; i < n; i++)
        {
            mpp1[str1[i]]++;
            mpp2[str2[i]]++;
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int temp1 = 0, temp2 = 0;

            if (mpp1.find(str1[i]) != mpp1.end())
                temp1 = mpp1[str1[i]];

            if (mpp2.find(str1[i]) != mpp2.end())
                temp2 = mpp2[str1[i]];

            ans = max(ans, min(temp1, temp2));
        }

        cout << ans << "\n";
    }

    return 0;
}