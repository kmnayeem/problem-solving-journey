/*
    Author : kmnayeem
    Description :
    This program prints an Inverted Full Pyramid star (*) pattern.

    Example Input:
    5

    Example Output:
    *********
     *******
      *****
       ***
        *

    Pattern Explanation:
    Row 1 -> 0 spaces + 9 stars
    Row 2 -> 1 space  + 7 stars
    Row 3 -> 2 spaces + 5 stars
    Row 4 -> 3 spaces + 3 stars
    Row 5 -> 4 spaces + 1 star

    Space Rule: i - 1
    Star Rule : 2*(n - i) + 1
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int star = 2*n - 1;
    int space = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            cout << " ";
        }
        for(int j=1; j<=star; j++)
        {
            cout << '*';
        }
        cout << '\n';
        star -= 2;
        space++; 
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
        for(int j=1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for(int j=1; j <= 2*(n - i) + 1; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}

===========================================================
*/