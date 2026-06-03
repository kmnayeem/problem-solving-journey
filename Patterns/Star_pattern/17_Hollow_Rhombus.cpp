/*
    Author : kmnayeem
    Description :
    This program prints a Hollow Rhombus star (*) pattern.

    Example Input:
    5

    Example Output:
        *****
       *   *
      *   *
     *   *
    *****

    Pattern Explanation:

    Space Rule:
        n - i

    Star Rule:
        First row  -> all stars
        Last row   -> all stars
        Middle rows -> only boundary stars
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        // print spaces
        for(int j=1; j<=n - i; j++)
        {
            cout << " ";
        }
        // print pattern
        for(int j=1; j<=n; j++)
        {
            if(i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}