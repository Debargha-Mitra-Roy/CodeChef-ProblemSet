/*
    LINK:   https://www.codechef.com/START56D/problems/CHEFGAMES
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
        vector<int> arr(4);

        int count = 0;

        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];

            if (arr[i] == 0)
                count++;
        }

        if (count == 4)
            cout << "IN\n";

        else
            cout << "OUT\n";
    }

    return 0;
}