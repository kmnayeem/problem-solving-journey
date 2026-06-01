/*
    Author : kmnayeem
    Description :
    This program prints a Full Pyramid star (*) pattern.

    Example Input:
    5

    Example Output:
        *
       ***
      *****
     *******
    *********

    Pattern Explanation:
    Row 1 -> 4 spaces + 1 star
    Row 2 -> 3 spaces + 3 stars
    Row 3 -> 2 spaces + 5 stars
    Row 4 -> 1 space  + 7 stars
    Row 5 -> 0 spaces + 9 stars

    Space Rule: n - i
    Star Rule : 2*i - 1
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
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
        for(int j=1; j <= n-i; j++)
        {
            cout << " ";
        }
        for(int j=1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}

===========================================================
*/