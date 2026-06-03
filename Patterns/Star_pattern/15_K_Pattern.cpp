/*
    Author : kmnayeem
    Description :
    This program prints a simple K star (*) pattern.

    Example Input:
    7

    Example Output:
    *    *
    *   *
    *  *
    * *
    **
    * *
    *  *
    *   *
    *    *

    Pattern Explanation:

    Left side : always '*'
    Right side: always '*'

    Space Rule:
        Upper part -> space decreases
        Lower part -> space increases
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = (n / 2) + 1;
    // Upper Part
    int space = mid - 1;
    for(int i = 1; i <= mid; i++)
    {
        cout << "*";
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        cout << "*";
        cout << '\n';
        space--;
    }
    // Lower Part
    space = 1;
    for(int i = mid + 1; i <= n; i++)
    {
        cout << "*";
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        cout << "*";
        cout << '\n';
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
    int mid = (n / 2) + 1;
    int space = mid - 1;
    for(int i = 1; i <= n; i++)
    {
        cout << "*";
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        cout << "*";
        cout << '\n';
        if(i < mid)
            space--;
        else
            space++;
    }
    return 0;
}

===========================================================
*/