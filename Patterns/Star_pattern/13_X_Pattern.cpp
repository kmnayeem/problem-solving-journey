/*
    Author : kmnayeem
    Description :
    This program prints an X star (*) pattern.

    Example Input:
    5

    Example Output:
    *   *
     * *
      *
     * *
    *   *

    Pattern Explanation:

    Main Diagonal:
    (1,1)
    (2,2)
    (3,3)
    (4,4)
    (5,5)

    Secondary Diagonal:
    (1,5)
    (2,4)
    (3,3)
    (4,2)
    (5,1)

    Visualization:

    *...*
    .*.*.
    ..*..
    .*.*.
    *...*

    ('.' = space)

    For every row:
    Print '*' when:
        j == i
        OR
        j == n - i + 1

    Otherwise print space.

    Main Diagonal Rule      : j == i
    Secondary Diagonal Rule : j == n - i + 1
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
            if(j == i || j == n-i+1)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
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
        for(int j=1; j<=n; j++)
        {
            cout << ((j == i || j == n-i+1) ? '*' : ' ');
        }
        cout << '\n';
    }
    return 0;
}

===========================================================
*/