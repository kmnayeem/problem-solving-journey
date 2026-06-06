/*
================================================================
Author      : kmnayeem
Problem     : Divisors
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

Description :
Given a number N, print all positive divisors
of N in ascending order.

A divisor of N is a number that divides N
exactly without leaving any remainder.

Print each divisor on a separate line.

Constraints :
1 ≤ N ≤ 10000
================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            cout << i << '\n';
        }
    }
    return 0;
}

/*
Time Complexity  : O(N)
Space Complexity : O(1)
*/