/*
	LINK:	https://www.codechef.com/problems/NEWBIE05
*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, count = 0;
    cin >> n;

    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        count = count + arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << sum - count << "\n";

    return 0;
}