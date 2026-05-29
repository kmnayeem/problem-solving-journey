/*
    ========================================================
    Author  : kmnayeem
    Topic   : Floor, Ceil, and Round Functions
    Link    : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
    ========================================================
*/

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    // Use double because the result of division
    // Can contain fractional (decimal) values.
    // Example: 10 / 3 = 3.333...
    double a, b;
    cin >> a >> b;

    // floor(x):
    // Returns the largest integer less than
    // or equal to x.
    // Example:
    // floor(3.8) = 3
    // floor(5.0) = 5
    int f = floor(a / b);

    // ceil(x):
    // Returns the smallest integer greater than
    // or equal to x.
    // ceil(3.2) = 4
    // ceil(5.0) = 5
    int c = ceil(a / b);

    // round(x):
    // Returns the nearest integer to x.
    // round(3.2) = 3
    // round(3.7) = 4
    int r = round(a / b);

    // Output results in the required format
    cout << "floor " << a << " / " << b << " = " << f << endl;
    cout << "ceil " << a << " / " << b << " = " << c << endl;
    cout << "round " << a << " / " << b << " = " << r << endl;

    return 0;
}
