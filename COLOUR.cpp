/*
    LINK:   https://www.codechef.com/START56D/problems/COLOUR
*/

#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        int count = 0;

        for (int i = 0; i < 3; i++)
        {
            if (arr[i] != 0)
            {
                arr[i]--;
                count++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (arr[i] > arr[j])
                    swap(&arr[i], &arr[j]);
            }
        }

        if (arr[0] >= 2)
            cout << count + 3 << "\n";

        else if (arr[0] == 1)
        {
            if (arr[2] >= 2)
                cout << count + 2 << "\n";

            else
                cout << count + 1 << "\n";
        }

        else
        {
            if (arr[1] == 0)
                cout << count << "\n";

            else
                cout << count + 1 << "\n";
        }
    }

    return 0;
}