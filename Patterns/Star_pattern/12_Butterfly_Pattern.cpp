/*
    Author : kmnayeem
    Description :
    This program prints a Butterfly star (*) pattern.

    Example Input:
    4

    Example Output:
    *      *
    **    **
    ***  ***
    ********
    ***  ***
    **    **
    *      *

    Pattern Visualization:

    i=1   *______*
    i=2   **____**
    i=3   ***__***
    i=4   ********
    i=3   ***__***
    i=2   **____**
    i=1   *______*

    (_ = space)

    Pattern Explanation:

    Upper Half:
    Row 1 -> 1 star + 6 spaces + 1 star
    Row 2 -> 2 stars + 4 spaces + 2 stars
    Row 3 -> 3 stars + 2 spaces + 3 stars
    Row 4 -> 4 stars + 0 spaces + 4 stars

    Lower Half:
    Row 5 -> 3 stars + 2 spaces + 3 stars
    Row 6 -> 2 stars + 4 spaces + 2 stars
    Row 7 -> 1 star + 6 spaces + 1 star

    Space Rule :
        2 * (n - i)

    Star Rule :
        Left  Part : i
        Right Part : i
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Upper Half
    int star = 1;
    int space = 2 * (n - 1);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=star; j++)
        {
            cout << '*';
        }
        for(int j=1; j<=space; j++)
        {
            cout << ' ';
        }
        for(int j=1; j<=star; j++)
        {
            cout << '*';
        }
        cout << '\n';
        star++;
        space -= 2;
    }
    // Lower Half
    int star2 = n - 1;
    int space2 = 2;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=star2; j++)
        {
            cout << '*';
        }
        for(int j=1; j<=space2; j++)
        {
            cout << ' ';
        }
        for(int j=1; j<=star2; j++)
        {
            cout << '*';
        }
        cout << '\n';
        star2--;
        space2 += 2;
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
        for(int j=1; j<=i; j++) cout << "*";
        for(int j=1; j<=2*(n-i); j++) cout << " ";
        for(int j=1; j<=i; j++) cout << "*";
        cout << '\n';
    }

    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=i; j++) cout << "*";
        for(int j=1; j<=2*(n-i); j++) cout << " ";
        for(int j=1; j<=i; j++) cout << "*";
        cout << '\n';
    }

    return 0;
}

===========================================================
*/