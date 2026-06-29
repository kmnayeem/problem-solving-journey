/*
================================================================
Author      : kmnayeem
Problem     : Sequence of Numbers and Sum
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

Description :
Given multiple lines, each containing two numbers N and M.

For each line:
- Print all numbers between N and M inclusive
  separated by spaces.
- Print "sum =" followed by the summation of all numbers.

The program terminates when any of the two numbers
is less than or equal to zero.

Constraints :
-100 ≤ N, M ≤ 100
================================================================
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    bool ok = true;
    while(ok)
    {
        cin >> n >> m;
        if(n > 0 && m > 0)
        {
            int start, end;
            if(n < m)
            {
                start = n;
                end = m;
            }
            else
            {
                start = m;
                end = n;
            }
            int sum = 0;
            for(int i = start; i <= end; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
        else
        {
            ok = false;
        }
    }
    return 0;
}