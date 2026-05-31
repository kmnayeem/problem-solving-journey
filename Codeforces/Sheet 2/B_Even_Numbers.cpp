/*
================================================================
Author      : kmnayeem
Problem     : Even Numbers
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

Description :
Given a number N, print all even numbers between 1 and N inclusive,
each on a separate line. If there are no even numbers, print -1.

Constraints :
1 ≤ N ≤ 1000
================================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // First check if there is at least one even number
    if (n<2)
    {
        cout << -1 << '\n';
    }
    else
    {
        // Print all even numbers from 2 to n
        for (int i=2; i<=n; i+=2)
        {
            cout << i << '\n';
        }
    }
    return 0;
}

/*
Time Complexity  : O(N/2) → O(N)
Space Complexity : O(1)
*/