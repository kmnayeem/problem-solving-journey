/*
================================================================
Author      : kmnayeem
Problem     : Sum of Consecutive Odd Numbers
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

Description :
Given T test cases, each containing two numbers X and Y.

For each test case:
- Find all odd numbers between X and Y.
- Exclude X and Y themselves.
- Print the sum of those odd numbers.

Constraints :
1 ≤ T ≤ 10
0 ≤ X, Y ≤ 10^4
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
        int x, y;
        cin >> x >> y;
        if(x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        int sum = 0;
        for(int i = x + 1; i < y; i++)
        {
            if(i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

/*
Note:
Swapping methods:

1. Using a temporary variable:
   temp = x;
   x = y;
   y = temp;

2. Using built-in swap():
   swap(x, y);

3. Using arithmetic:
   x = x + y;
   y = x - y;
   x = x - y;

4. Using XOR:
   x = x ^ y;
   y = x ^ y;
   x = x ^ y;
   
*/