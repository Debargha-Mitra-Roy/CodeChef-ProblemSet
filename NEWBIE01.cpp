/*
	LINK:	https://www.codechef.com/problems/NEWBIE01
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << sum << "\n";

    return 0;
}