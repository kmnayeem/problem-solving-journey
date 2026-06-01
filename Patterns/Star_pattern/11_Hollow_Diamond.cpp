/*
    Author : kmnayeem
    Description :
    This program prints a Hollow Diamond star (*) pattern.

    Example Input:
    5

    Example Output:
        *
       * *
      *   *
     *     *
      *   *
       * *
        *

    Pattern Explanation:
    Upper Half:
    Row 1 -> 4 spaces + 1 star
    Row 2 -> 3 spaces + 2 stars
    Row 3 -> 2 spaces + 2 stars
    Row 4 -> 1 space  + 2 stars

    Lower Half:
    Row 1 -> 1 space  + 2 stars
    Row 2 -> 2 spaces + 2 stars
    Row 3 -> 3 spaces + 1 star

    Space Rule: Depends on row position
    Star Rule : Boundary logic
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Upper part
    int space = n - 1;
    int star = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            cout << " ";
        }
        for(int j=1; j<=star; j++)
        {
            if(j == 1 || j == star)
                cout << "*";
            else
                cout << " ";
        }
        cout << '\n';
        space--;
        star += 2;
    }
    // Lower part
    int space2 = 1;
    int star2 = 2*n - 3;
    for(int i=1; i<=n - 1; i++)
    {
        for(int j=1; j<=space2; j++)
        {
            cout << " ";
        }
        for(int j=1; j<=star2; j++)
        {
            if(j == 1 || j == star2)
                cout << "*";
            else
                cout << " ";
        }
        cout << '\n';
        space2++;
        star2 -= 2;
    }
    return 0;
}