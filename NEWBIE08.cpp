/*
	LINK:	https://www.codechef.com/problems/NEWBIE08
*/

#include <iostream>
using namespace std;

int main()
{
	int n, x, sum = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            x = (arr[i] - arr[i + 1]);
            sum = sum + x;
            arr[i + 1] = arr[i + 1] + x;
        }
    }

    cout << sum << "\n";
    
    return 0;
}