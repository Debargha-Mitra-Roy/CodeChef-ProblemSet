/*
    LINK:   https://www.codechef.com/CCSTART2/problems/FINDMELI
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == k)
            count++;
    }

    if (count >= 1)
        cout << "1\n";

    else
        cout << "-1\n";

    return 0;
}