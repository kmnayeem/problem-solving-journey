/*
================================================================
Author      : kmnayeem
Problem     : Some Sums
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

Description :
Given three numbers N, A, and B.

Find the summation of all numbers from 1 to N
whose digit sum is between A and B inclusive.

Constraints :
1 ≤ N ≤ 10^4
1 ≤ A ≤ B ≤ 36
================================================================
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    long long total = 0;
    for(int i = 1; i <= n; i++)
    {
        int curnum = i;
        int digit = 0;
        // Calculate sum of digits
        while(curnum > 0)
        {
            digit += curnum % 10;
            curnum /= 10;
        }
        // Check if digit sum is within the range
        if(digit >= a && digit <= b)
        {
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}