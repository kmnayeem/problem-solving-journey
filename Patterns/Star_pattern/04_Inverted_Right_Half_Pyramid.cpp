/*
    Author : kmnayeem
    Description :
    This program prints an Inverted Right Half Pyramid star (*) pattern.

    Example Input:
    5

    Example Output:
    *****
     ****
      ***
       **
        *

    Pattern Explanation:
    Row 1 -> 5 stars + 0 spaces
    Row 2 -> 4 stars + 1 space
    Row 3 -> 3 stars + 2 spaces
    Row 4 -> 2 stars + 3 spaces
    Row 5 -> 1 star  + 4 spaces
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int star = n;
    int space = 0;
    for(int i=1; i<=n; i++)
    {
        // print spaces
        for(int j=1; j<=space; j++)
        {
            cout << " ";
        }
        // print stars
        for(int j=1; j<=star; j++)
        {
            cout << '*';
        }
        cout << '\n';
        star--;   // decrease stars
        space++;  // increase spaces
    }
    return 0;
}

/*
==================== OPTIMIZED VERSION ====================

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=n; i>=1; i--)
    {
        for(int j=0; j<n-i; j++)
        {
            cout << " ";
        }
        for(int j=0; j<i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}

===========================================================
*/