/*
    Author : kmnayeem
    Description :
    This program prints a Zebra (Horizontal Stripes) star pattern.

    Example Input:
    5

    Example Output:
    *****
    -----
    *****
    -----
    *****

    Pattern Explanation:

    Odd rows  -> print '*'
    Even rows -> print '-'
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i % 2 != 0)
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout << '\n';
    }
    return 0;
}