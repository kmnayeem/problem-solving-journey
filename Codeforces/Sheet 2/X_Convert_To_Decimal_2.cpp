/*
================================================================
Author      : kmnayeem
Problem     : Convert To Decimal 2
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

Description :
Given a number N.

Steps:
1. Convert N to binary.
2. Count number of 1's in binary representation.
3. Construct a binary number consisting of only 1's
   equal to the count.
4. Convert that binary number to decimal and print it.

Example:
N = 10
Binary = 1010
Number of 1's = 2
New binary = 11
Decimal = 3

Constraints :
1 ≤ T ≤ 10
1 ≤ N ≤ 2^31 - 1
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
        long long n;
        cin >> n;
        int cnt = 0;
        while(n > 0)
        {
            if(n % 2 == 1)
            {
                cnt++;
            }
            n = n / 2;
        }
        long long result = 0;
        long long power = 1;
        for(int i = 0; i < cnt; i++)
        {
            result += power;
            power *= 2;
        }
        cout << result << "\n";
    }
    return 0;
}

/*
Time Complexity  : O(T * log N)
Space Complexity : O(1)
*/