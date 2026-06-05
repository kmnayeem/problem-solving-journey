/*
================================================================
Author      : kmnayeem
Problem     : Fixed Password
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

Description :
Given multiple lines, each containing a number X representing
a password.

- Print "Wrong" if the password is incorrect.
- Print "Correct" if the password is 1999 and terminate the program.

The correct password is 1999.

Constraints :
1000 <= X <= 9999
================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    while(cin >> x)
    {
        if(x == 1999)
        {
            cout << "Correct" << '\n';
            break;
        }
        else
        {
            cout << "Wrong" << '\n';
        }
    }
    return 0;
}

/*
Time Complexity  : O(N)
Space Complexity : O(1)
*/