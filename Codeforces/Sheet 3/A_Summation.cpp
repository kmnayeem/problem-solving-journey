/*
================================================================
Author      : kmnayeem
Problem     : Summation
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

Description :
Given a number N and an array of N integers,
find the summation of all elements and print
its absolute value.

Absolute value means removing the negative sign
from a number.

Constraints :
1 ≤ N ≤ 100000
-10^9 ≤ Ai ≤ 10^9
================================================================
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        sum += x;
    }
    if(sum < 0)
        sum = -sum;
    cout << sum;
    return 0;
}

/*
Time Complexity  : O(N)
Space Complexity : O(1)
*/