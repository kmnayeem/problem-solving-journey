/*
================================================================
Author      : kmnayeem
Problem     : Even, Odd, Positive and Negative
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

Description :
Given N integers, count how many of them are:
1. Even numbers
2. Odd numbers
3. Positive numbers
4. Negative numbers

Print the counts in the required format.

Constraints :
1 ≤ N ≤ 1000
-100000 ≤ Xi ≤ 100000
================================================================
*/

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int even = 0, odd = 0, positive = 0, negative = 0;
    for(int i=1; i<=n; i++) 
    {
        int x;
        cin >> x;
        if(x % 2 == 0)
        {
            even++;
        } 
        if(x % 2 != 0)
        {
            odd++;
        }
        if(x > 0)
        {
            positive++;
        } 
        if(x < 0)
        {
            negative++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    return 0;
}

/*
Time Complexity  : O(N)
Space Complexity : O(1)
*/