/*
================================================================
Author      : kmnayeem
Problem     : Lucky Numbers
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

Description :
Given two numbers A and B, print all lucky numbers
between A and B (inclusive).

A lucky number is a number whose digits are only
4 and 7.

If no lucky number exists, print -1.

Constraints :
1 ≤ A ≤ B ≤ 100000
================================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    bool found = false;
    for(int i = A; i <= B; i++)
    {
        int n = i;
        bool lucky = true;
        // check digits one by one
        while(n > 0)
        {
            int digit = n%10;
            if(digit != 4 && digit != 7)
            {
                lucky = false;
                break;
            }
            n /= 10;
        }
        if(lucky)
        {
            cout << i << " ";
            found = true;
        }
    }
    if(!found)
    cout << -1;
    return 0;
}

/*
Time Complexity  : O((B - A + 1) * d)
Space Complexity : O(1)

Where d = number of digits.

Note:
We extract digits using modulo (%) and division (/)
instead of converting to string.
*/