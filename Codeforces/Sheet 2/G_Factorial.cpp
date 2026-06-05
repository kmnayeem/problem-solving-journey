/*
================================================================
Author      : kmnayeem
Problem     : Factorial
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

Description :
Given T test cases, each containing a number N,
print the factorial of N.

Factorial of N (N!) is the product of all positive
integers from 1 to N.

Special Case:
0! = 1

Constraints :
1 ≤ T ≤ 15
0 ≤ N ≤ 20
================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long factorial = 1;
        for(int i=1; i<=n; i++)
        {
            factorial *= i;
        }
        cout << factorial << '\n';
    }
    return 0;
}

/*
Time Complexity  : O(T × N)
Space Complexity : O(1)

Note:
If the number of test cases or the value of N becomes large,
Dynamic Programming can be used to precompute factorials and
avoid repeated calculations.
*/