/*
    LINK:   https://www.codechef.com/FEB221C/problems/BINBASBASIC
*/

#include <iostream>
using namespace std;

bool canPalindrome(string s, int n, int k)
{
    int left = 0;
    int right = n - 1;

    int count = 0;

    while (left < right)
    {
        if (s[left] != s[right])
            count++;

        left++;
        right--;
    }

    if (n % 2 == 0)
    {
        if (count <= k && (k - count) % 2 == 0)
            return true;

        else
            return false;
    }

    else
    {
        if (count <= k)
            return true;

        else
            return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int k;
        cin >> k;

        string s;
        cin >> s;

        if (canPalindrome(s, n, k))
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}