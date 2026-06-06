/*
================================================================
Author      : kmnayeem
Problem     : One Prime
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

Description :
Given a number X, determine whether it is prime or not.

A prime number is a number greater than 1 that has
exactly two divisors: 1 and itself.

Print:
"YES" if X is prime.
"NO" otherwise.

Constraints :
2 ≤ X ≤ 100000
================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    bool prm = true;
    for(int i = 2; i*i <= x; i++)
    {
        if(x % i == 0)
        {
            prm = false;
            break;
        }
    }
    cout << (prm ? "YES" : "NO");
    return 0;
}

/*
Time Complexity  : O(√X)
Space Complexity : O(1)
*/