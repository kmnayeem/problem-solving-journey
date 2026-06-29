/*
================================================================
Author      : kmnayeem
Problem     : Shape2
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

Description :
Given an integer N, print a pyramid that has N rows.

Each row contains:
- Some spaces before the stars.
- Odd number of stars increasing by 2 each row.

Example Pattern:
   *
  ***
 *****
*******

Constraints :
1 ≤ N ≤ 99

For more pattern problems and explanations,
see the Patterns/ folder in this repository.
================================================================
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int star = 1;
    int space = n - 1;
    for(int i = 1; i <= n; i++)
    {
        // Print spaces before stars
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
        // Update values for next row
        star += 2;
        space--;
    }
    return 0;
}