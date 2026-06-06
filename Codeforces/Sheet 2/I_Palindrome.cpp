/*
================================================================
Author      : kmnayeem
Problem     : Palindrome
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

Description :
Given a number N:

1. Print N in reversed order without leading zeros.
2. Check whether N is a palindrome number.

A palindrome number reads the same forward
and backward.

Examples:
12121 → Palindrome
101   → Palindrome
160   → Not Palindrome

Constraints :
1 ≤ N ≤ 10^7
================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int original = n;
    int reversed = 0;
    while(n>0)
    {
        int digit = n%10;
        reversed = (reversed*10) + digit;
        n /= 10;
    }
    cout << reversed << '\n';
    cout << (original == reversed ? "YES" : "NO");
    return 0;
}

/*
Time Complexity  : O(d)
Space Complexity : O(1)

Where d = number of digits in N.

Note:
Reversing an integer automatically removes
leading zeros.

Example:
160 → 061 → 61
*/