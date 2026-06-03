/*
    Author : kmnayeem
    Description :
    This program prints a simple Plus (+) star (*) pattern.

    Example Input:
    5

    Example Output:
      *
      *
    *****
      *
      *

    Pattern Explanation:

    Middle row -> full stars
    Other rows -> only one star in middle column
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = (n/2) + 1;
    for(int i=1; i<=n; i++)
    {
        if(i == mid)
        {
            // middle row: full stars
            for(int j=1; j<=n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            // other rows: print spaces then one star
            for(int j=1; j <= n/2; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}