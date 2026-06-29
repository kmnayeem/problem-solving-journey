/*
================================================================
Author      : kmnayeem
Problem     : Pyramid
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O

Description :
Given an integer N, print a left-angled pyramid
consisting of N rows.

The first row contains one '*',
the second row contains two '*',
and so on until the Nth row.

Constraints :
1 ≤ N ≤ 99

Pattern :
*
**
***
****
...

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
    for(int i = 1; i <= n; i++)
    {
        // Print '*' i times
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