/*
================================================================
Author      : kmnayeem
Problem     : Numbers Histogram
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N

Description :
Given a symbol S and N numbers, print a histogram.

For each number Xi, print the symbol S repeated
exactly Xi times on a separate line.

Constraints :
1 ≤ N ≤ 50
1 ≤ Xi ≤ 100
S can be one of (+, -, *, /)
================================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int n;
    cin >> ch >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for(int j = 0; j < x; j++)
        {
            cout << ch;
        }
        cout << "\n";
    }
    return 0;
}
