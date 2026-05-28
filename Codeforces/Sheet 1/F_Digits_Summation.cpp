#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long int n, m;
    cin >> n >> m;
    int last_digit_n = n % 10;
    int last_digit_m = m % 10;
    cout << last_digit_n + last_digit_m;
    return 0;
}
    /* 
    Modulo 10 returns the remainder after division by 10,
    which is always the last digit of the number.
    Example:
    13 % 10 = 3
    127 % 10 = 7
    */

