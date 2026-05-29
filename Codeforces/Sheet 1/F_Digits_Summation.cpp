/*
    ========================================================
    Author  : kmnayeem
    Topic   : Sum of Last Digits
    Problem : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
    ========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int n, m; 
    cin >> n >> m;

    // Extracting last digit of each number using modulo 10
    int last_digit_n = n % 10;
    int last_digit_m = m % 10;
    
    cout << last_digit_n + last_digit_m;

    return 0;
}

/*
    Modulo 10 returns the remainder after division by 10,
    which represents the last digit of a number.

    Example:
        13 % 10  = 3
        127 % 10 = 7
*/
