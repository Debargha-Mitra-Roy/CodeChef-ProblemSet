/*
    LINK:   https://www.codechef.com/HWRD2021/problems/TEAMCOMP
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int A = 0, B = 0, C = 0, D = 0;

        for (int i = 0; i < 30; i++)
        {
            if (s[i] == 'A')
                A++;
            if (s[i] == 'B')
                B++;
            if (s[i] == 'C')
                C++;
            if (s[i] == 'D')
                D++;
        }

        if (A > B && A > C && A > D)
            cout << "A\n";

        else if (B > A && B > C && B > D)
            cout << "B\n";

        else if (C > A && C > B && C > D)
            cout << "C\n";

        else if (D > A && D > B && D > C)
            cout << "D\n";

        else
        {
            if (A == B && A > C && A > D && B > C && B > D)
                cout << "A B\n";

            else if (A == C && A > B && A > D && C > B && C > D)
                cout << "A C\n";

            else if (A == D && A > B && A > C && D > B && D > C)
                cout << "A D\n";

            else if (B == C && B > A && B > D && C > A && C > D)
                cout << "B C\n";

            else if (B == D && B > A && B > C && D > A && D > C)
                cout << "B D\n";

            else if (C == D && C > A && C > B && D > A && D > B)
                cout << "C D\n";

            else if (A == B && B == C && A == C && A > D && B > D && C > D)
                cout << "A B C\n";

            else if (A == B && B == D && A == D && A > C && B > C && D > C)
                cout << "A B D\n";

            else if (A == C && C == D && A == D && A > B && C > B && D > B)
                cout << "A C D\n";

            else if (B == C && C == D && B == D && B > A && D > A && C > A)
                cout << "B C D\n";

            else
                cout << "A B C D\n";
        }
    }

    return 0;
}