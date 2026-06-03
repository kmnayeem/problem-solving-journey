/*
    Author : kmnayeem
    Description :
    This program prints an Hourglass star (*) pattern.

    Example Input:
    3

    Example Output:
    *****
     ***
      *
     ***
    *****

    Pattern Visualization:

    i=1   *****
    i=2   _***
    i=3   __*
    i=4   _***
    i=5   *****

    (_ = space)

    Pattern Explanation:

    Upper Half:
    Row 1 -> 0 spaces + 5 stars
    Row 2 -> 1 space  + 3 stars
    Row 3 -> 2 spaces + 1 star

    Lower Half:
    Row 4 -> 1 space  + 3 stars
    Row 5 -> 0 spaces + 5 stars

    Space Rule:
        Upper Part : i - 1
        Lower Part : i

    Star Rule:
        Upper Part : 2*(n-i) + 1
        Lower Part : 2*i + 1
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Upper Half
    int star = 2*n - 1;
    int space = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            cout << ' ';
        }
        for(int j=1; j<=star; j++)
        {
            cout << '*';
        }
        cout << '\n';
        star -= 2;
        space++;
    }
    // Lower Half
    int star2 = 3;
    int space2 = n - 2;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=space2; j++)
        {
            cout << ' ';
        }
        for(int j=1; j<=star2; j++)
        {
            cout << '*';
        }
        cout << '\n';
        star2 += 2;
        space2--;
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
    // Upper Half
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++) cout << " ";
        for(int j=0; j<2*(n-i)-1; j++) cout << "*";
        cout << '\n';
    }
    // Lower Half
    for(int i=n-2; i>=0; i--)
    {
        for(int j=0; j<i; j++) cout << " ";
        for(int j=0; j<2*(n-i)-1; j++) cout << "*";
        cout << '\n';
    }
    return 0;
}

===========================================================
*/