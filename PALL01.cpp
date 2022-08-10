/*
    LINK:   https://www.codechef.com/problems/PALL01
*/

#include <iostream>
using namespace std;

bool isPalindrome(string &str, int n, int i)
{
    if (i >= n / 2)
        return true;

    if (str[i] != str[n - i - 1])
        return false;

    return isPalindrome(str, n, i + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        int n = str.length();

        if (isPalindrome(str, n, 0))
            cout << "wins\n";

        else
            cout << "loses\n";
    }

    return 0;
}