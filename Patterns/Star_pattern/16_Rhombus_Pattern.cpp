/*
    Author : kmnayeem
    Description :
    This program prints a Rhombus star (*) pattern.

    Example Input:
    5

    Example Output:
        *****
       *****
      *****
     *****
    *****

    Pattern Explanation:

    Space Rule:
        n - i

    Star Rule:
        always n stars in each row
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
        for(int j=1; j <= n - i; j++)
        {
            cout << " ";
        }
        // print stars
        for(int j=1; j<=n; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}