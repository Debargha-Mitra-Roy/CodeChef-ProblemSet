/*
    LINK:   https://www.codechef.com/JAN221C/problems/RIFFLES
*/

#include <iostream>
#include <vector>
using namespace std;

void riffle(int n, int k)
{
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    vector<int> temp(n);

    while (k--)
    {
        int mid = n / 2;
        int index = 0, iterate = 1;

        for (int i = 0; i < n; i++)
        {
            if (i < mid)
            {
                temp[i] = arr[index];
                index = index + 2;
            }

            else
            {
                temp[i] = arr[iterate];
                iterate = iterate + 2;
            }
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        riffle(n, k);
    }

    return 0;
}