/*
================================================================
Author      : kmnayeem
Problem     : PUM
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V

Description :
Given a number N, print N lines describing the PUM game.

Each line contains:
- Three consecutive numbers.
- The word "PUM" instead of the fourth number.

Pattern:
1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
...

Constraints :
1 ≤ N ≤ 20
================================================================
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num = 1;
    for(int i = 1; i <= n; i++)
    {
        cout << num << " " << num + 1 << " " << num + 2 << " PUM" << "\n";
        num = num + 4;
    }
    return 0;
}

/*
Note:
Each line skips one number after printing three numbers.
That's why the starting number increases by 4 each row:

Row 1: 1  2  3  PUM
Row 2: 5  6  7  PUM
Row 3: 9 10 11  PUM
*/