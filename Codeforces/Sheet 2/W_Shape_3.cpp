/*
================================================================
Author      : kmnayeem
Problem     : Shape3
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

Description :
Given an integer N, print a diamond shape that has 2N rows.

The diamond contains:
- Upper pyramid with N rows.
- Lower inverted pyramid with N rows.

Constraints :
1 ≤ N ≤ 99

Pattern :
   *
  ***
 *****
*******
*******
 *****
  ***
   *

For more pattern problems and explanations,
see the Patterns/ folder in this repository.
================================================================
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // Upper Pyramid
    int star = 1;
    int space = n - 1;
    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // Print stars
        for(int j = 1; j <= star; j++)
        {
            cout << '*';
        }
        cout << '\n';
        star += 2;
        space--;
    }
    // Lower Inverted Pyramid
    int star2 = 2 * n - 1;
    int space2 = 0;
    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int j = 1; j <= space2; j++)
        {
            cout << " ";
        }
        // Print stars
        for(int j = 1; j <= star2; j++)
        {
            cout << '*';
        }
        cout << '\n';
        star2 -= 2;
        space2++;
    }
    return 0;
}
