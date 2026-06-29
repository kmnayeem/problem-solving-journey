/*
================================================================
Author      : kmnayeem
Problem     : Easy Fibonacci
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

Description :
The Fibonacci sequence is a series of numbers where:
- The first number is 0
- The second number is 1
- Every next number is the sum of the previous two numbers

Formula:
fib(1) = 0
fib(2) = 1
fib(n) = fib(n-1) + fib(n-2)

Sequence:
0 1 1 2 3 5 8 13 21 ...

Given a number N, print the first N Fibonacci numbers.

Constraints :
1 ≤ N ≤ 45
================================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // First Fibonacci number
    if(n >= 1) 
        cout << 0;
    // Second Fibonacci number
    if(n >= 2) 
        cout << " " << 1;
    int fib1 = 0;
    int fib2 = 1;
    // Generate remaining Fibonacci numbers
    for(int i = 3; i <= n; i++)
    {
        int nextFib = fib1 + fib2;
        cout << " " << nextFib;
        fib1 = fib2;
        fib2 = nextFib;
    }
    cout << "\n";
    return 0;
}
