/*
    LINK:   https://www.codechef.com/problems/CHEFARRP
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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int product = arr[i];
            int sum = arr[i];

            for (int j = i + 1; j < n; j++)
            {
                if (product == sum)
                    count++;

                product = product * arr[j];
                sum = sum + arr[j];
            }

            if (product == sum)
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}