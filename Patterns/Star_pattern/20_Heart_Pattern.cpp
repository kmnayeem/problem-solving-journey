/*
    Author : kmnayeem
    Description :
    This program prints a Heart Star (*) pattern.

    Example Input:
    6

    Example Output:
      **     **
     ****   ****
    ****** ******
     ***********
      *********
       *******
        *****
         ***
          *

    Note:
    For better symmetry and shape, it is recommended to use an even number for n.
    
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = n/2;
    // Upper Part (Heart top)
    for(int i = 1; i <= mid; i++)
    {
        // left spaces
        for(int j = 1; j <= mid - i; j++)
        {
            cout << " ";
        }
        // left stars
        for(int j = 1; j <= 2*i; j++)
        {
            cout << "*";
        }
        // middle space
        for(int j = 1; j <= 2*(mid - i) + 1; j++)
        {
            cout << " ";
        }
        // right stars
        for(int j = 1; j <= 2*i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // Lower Part (Inverted pyramid)
    int stars = 2*n - 1;
    int space = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
        space++;
        stars-=2;
    }
    return 0;
}