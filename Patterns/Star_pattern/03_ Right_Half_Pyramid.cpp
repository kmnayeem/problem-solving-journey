/*
    Author : kmnayeem
    Description :
    This program prints a Right Half Pyramid star (*) pattern.

    Example Input:
    5

    Example Output:
        *
       **
      ***
     ****
    *****

    Pattern Explanation:
    Row 1 -> 4 space + 1 star
    Row 2 -> 3 space + 2 star
    Row 3 -> 2 space + 3 star
    Row 4 -> 1 space + 4 star
    Row 5 -> 0 space + 5 star

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int star = 1; // stars in current row
    int space = n - 1; // leading spaces
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
        star++; // next row has one more star
        space--; // next row has one less space
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
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout << " ";
        }
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}

===========================================================
*/
