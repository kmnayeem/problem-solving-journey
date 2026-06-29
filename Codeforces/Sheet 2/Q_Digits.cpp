/*
================================================================
Author      : kmnayeem
Problem     : Digits
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

Description :
Given T test cases, each containing an integer N,
print the digits of N from right to left.

Each digit should be separated by a space.

If N is 0, simply print 0.

Constraints :
1 ≤ T ≤ 10
0 ≤ N ≤ 10^9
================================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        // Special case when the number is 0
        if(n== 0)
        {
            cout << 0;
        }
        // Print digits from right to left
        while(n != 0)
        {
            cout << n % 10 << " ";
            n /= 10;
        }
        cout << "\n";
    }
    return 0;
}

/*
Time Complexity  : O(T × d)

Where d is the number of digits in N.
For each test case, we process every digit exactly once.

Space Complexity : O(1)

Note:
We repeatedly extract the last digit using (% 10)
and remove it using (/ 10), naturally printing
the digits from right to left without using
strings or extra storage.
*/