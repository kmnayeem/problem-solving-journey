/*
================================================================
Author      : kmnayeem
Problem     : Multiplication Table
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F

Description :
Given a number N, print its multiplication table from
1 to 12 in the following format:

N * i = N*i

for all values of i from 1 to 12.

Constraints :
1 ≤ N ≤ 50
================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=12; i++)
    {
        cout << n << " * " << i << " = " << n*i << '\n';
    }
    return 0;
}

/*
Time Complexity  : O(1)
Space Complexity : O(1)
*/