/*
================================================================
Author      : kmnayeem
Problem     : GCD
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

Description :
Given two numbers A and B, find and print
their Greatest Common Divisor (GCD).

The GCD of two integers is the largest
positive integer that divides both numbers.

This solution uses the Euclidean Algorithm.

Constraints :
1 ≤ A, B ≤ 1000
================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << a << '\n';
    return 0;
}

/*
Time Complexity  : O(log(min(A, B)))
Space Complexity : O(1)

Note:
The Euclidean Algorithm is based on:

gcd(a, b) = gcd(b, a % b)

The process continues until b becomes 0.
At that point, a contains the GCD.
*/