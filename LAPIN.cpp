/*
    LINK:   https://www.codechef.com/problems/LAPIN
*/

#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string &str, int n, int i)
{
    if (i >= n / 2)
        return true;

    if (str[i] != str[n - i - 1])
        return false;

    return (str, n, i + 1);
}

bool isLapindrome(string &str, int n)
{
    int mid = n / 2;

    vector<char> temp, flag;

    if (n % 2 == 0)
    {
        for (int i = 0; i < mid; i++)
        {
            temp.push_back(str[i]);
        }

        for (int j = mid; j < n; j++)
        {
            flag.push_back(str[j]);
        }
    }

    else
    {
        for (int i = 0; i < mid; i++)
        {
            temp.push_back(str[i]);
        }

        for (int j = mid + 1; j < n; j++)
        {
            flag.push_back(str[j]);
        }
    }

    if (temp == flag)
        return true;

    else
        return false;
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

        if (isPalindrome(str, n, 0) || isLapindrome(str, n))
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}