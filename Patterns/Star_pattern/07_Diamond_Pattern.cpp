/*
    Author : kmnayeem
    Description :
    This program prints a Diamond star (*) pattern.

    Example Input:
    5

    Example Output:
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *

    Pattern Explanation:
    Upper Pyramid:
    Row 1 -> 4 spaces + 1 star
    Row 2 -> 3 spaces + 3 stars
    Row 3 -> 2 spaces + 5 stars
    Row 4 -> 1 space  + 7 stars
    Row 5 -> 0 spaces + 9 stars

    Lower Inverted Pyramid:
    Row 6 -> 1 space  + 7 stars
    Row 7 -> 2 spaces + 5 stars
    Row 8 -> 3 spaces + 3 stars
    Row 9 -> 4 spaces + 1 star

    Space Rule:
        Upper part   : n - i
        Lower part   : i (starting from 1 after midpoint)

    Star Rule :
        Upper part   : 2*i - 1
        Lower part   : 2*(n - i) - 1
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Upper Pyramid
    int star = 1;
    int space = n-1;
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
        star += 2;
        space--;
    }
    // Lower Inverted Pyramid
    int star2 = 2*n - 3;
    int space2 = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space2; j++)
        {
            cout << " ";
        }
        for(int j=1; j<=star2; j++)
        {
            cout << '*';
        }
        cout << '\n';
        star2 -= 2;
        space2++; 
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
    // Upper Pyramid
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++) cout << " ";
        for(int j=1; j<=2*i-1; j++) cout << "*";
        cout << '\n';
    }
    // Lower Inverted Pyramid
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=n-i; j++) cout << " ";
        for(int j=1; j<=2*i-1; j++) cout << "*";
        cout << '\n';
    }
    return 0;
}

===========================================================
*/