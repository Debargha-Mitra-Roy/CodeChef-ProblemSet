/*
    LINK:   https://www.codechef.com/JAN221C/problems/COVSPRD
*/

#include <iostream>
using namespace std;

long long int covidSpread(long long int number_of_peoples, long long int days)
{
    long long int count = 1;
    long long int i = 1;

    while (i <= days)
    {
        if (i <= 10)
        {
            count = count * 2;

            if (count >= number_of_peoples)
            {
                count = number_of_peoples;
                break;
            }
        }

        else
        {
            count = count * 3;

            if (count >= number_of_peoples)
            {
                count = number_of_peoples;
                break;
            }
        }

        i++;
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int number_of_peoples, days;
        cin >> number_of_peoples >> days;

        long long int count = covidSpread(number_of_peoples, days);

        cout << count << "\n";
    }

    return 0;
}