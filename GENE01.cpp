/*
    LINK:   https://www.codechef.com/START20C/problems/GENE01
*/

#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    if (c1 == 'R' || c2 == 'R')
        cout << "R\n";

    else if ((c1 == 'B' && c2 == 'G') || (c1 == 'G' && c2 == 'B') || (c1 == 'B' && c2 == 'B'))
        cout << "B\n";

    else
        cout << "G\n";

    return 0;
}