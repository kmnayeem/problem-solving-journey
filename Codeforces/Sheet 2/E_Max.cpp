/*
================================================================
Author      : kmnayeem
Problem     : Max
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

Description :
Given a number N and N integers, find and print the maximum
number among them.

Constraints :
1 ≤ N ≤ 1000
0 ≤ Xi ≤ 10^9
================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long mx = INT_MIN;
    for(int i=1; i<=n; i++)
    {
        long long x;
        cin >> x;
        if(x > mx)
        {
            mx = x;
        }
    }
    cout << mx << '\n';
    return 0;
}

/*
Time Complexity  : O(N)
Space Complexity : O(1)
*/