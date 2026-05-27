#include <bits/stdc++.h>
using namespace std;
int main() 
{
    // Double precision floating point number
    double r;
    cin >> r;
     // Calculating the area of the circle. Formula: pi * r^2
    double area = 3.141592653 * r * r;
    cout << fixed << setprecision(9) << area;
    return 0;
}

// fixed:
// Tells C++ to show the number as a decimal number
// instead of shortening it or using scientific form

// setprecision(9):
// Tells C++ to print 9 numbers after the decimal point

// Example:
// area = 78.5

// Without fixed and setprecision:
// Output may look like:
// 78.5

// With fixed << setprecision(9):
// Output becomes:
// 78.500000000

// Here:
// 78 = whole number part
// . = decimal point
// 500000000 = 9 digits after the decimal point