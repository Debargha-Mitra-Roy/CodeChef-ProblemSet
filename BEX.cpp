/*
    LINK:   https://www.codechef.com/problems/BEX
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    stack<pair<int, string>> s;

    vector<int> min;

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;

        if (n != -1)
        {
            string str;
            cin >> str;

            if (n == 0)
                continue;

            s.push({n, str});

            if ((min.size() == 0 ) || (n <= min.back()))
                min.push_back(n);
        }

        else
        {
            int count = 0;
            int minValue = min.back();

            while (s.top().first != minValue)
            {
                s.pop();
                count++;
            }

            cout << count << " " << s.top().second << "\n";

            s.pop();
            min.pop_back();
        }
    }

    return 0;
}