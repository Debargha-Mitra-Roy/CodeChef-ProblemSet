/*
    LINK:   https://www.codechef.com/CDRV21C/problems/FRGAME
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nitin, sobhagya, ritik, satyarth ;
        cin >> nitin >> sobhagya >> ritik >> satyarth ;

        if (nitin >= sobhagya)
            sobhagya = sobhagya + ritik;

        else
            nitin = nitin + ritik;

        if (nitin >= sobhagya)
            sobhagya = sobhagya + satyarth ;

        else
            nitin = nitin + satyarth ;

        if (nitin >= sobhagya)
            cout << "N\n";

        else
            cout << "S\n";
    }

    return 0;
}