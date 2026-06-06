/*
================================================================
Author      : kmnayeem
Problem     : Primes from 1 to N
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

Description :
Given a number N, print all prime numbers
between 1 and N (inclusive).

A prime number is a number greater than 1
that has exactly two divisors:
1 and itself.

Print all prime numbers separated by spaces.

Constraints :
2 ≤ N ≤ 1000
================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=2; i<=n; i++)
    {
        bool prm = true;
        for(int j=2; j*j <= i; j++)
        {
            if(i%j == 0)
            {
                prm = false;
                break;
            }
        }
        if(prm)
        cout << i << " ";
    }
    return 0;
}

/*
Time Complexity  : O(N√N)
Space Complexity : O(1)

Note:
For every number from 2 to N,
we check divisibility only up to √i.

A more efficient solution for large N is
the Sieve of Eratosthenes with
Time Complexity O(N log log N).
*/