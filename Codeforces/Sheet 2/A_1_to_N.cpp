/*
================================================================
Author      : kmnayeem
Problem     : Print numbers from 1 to N
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A

Description :
Given a number N, print all numbers from 1 to N, each on a new line.

Constraints :
1 ≤ N ≤ 1000
================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cout << i << endl;
    }
    return 0;
}

/*
-------------------------------
Time Complexity  : O(N)
Space Complexity : O(1)
-------------------------------
*/