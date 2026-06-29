/*
================================================================
Author      : kmnayeem
Problem     : Shape1
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

Description :
Given an integer N, print an upside-down
left-angled triangle consisting of N rows.

The first row contains N '*',
the second row contains N-1 '*',
and so on until the last row contains one '*'.

Constraints :
1 ≤ N ≤ 99

Pattern :
****
***
**
*

For more pattern problems and explanations,
see the Pattern/ folder in this repository.
================================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

/*
For more pattern problems and detailed explanations,
check the Pattern/ folder in this repository.
*/