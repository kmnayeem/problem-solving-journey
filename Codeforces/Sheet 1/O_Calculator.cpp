/*
 ============================================================================
 Author      : kmnayeem
 Topic       : Simple Calculator
 Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
 ============================================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    
    if (s == '+') cout << a + b << endl;
    else if (s == '-') cout << a - b << endl;
    else if (s == '*') cout << a * b << endl;
    else if (s == '/') cout << a / b << endl;

    return 0;
}

/*
========================================================
Explanation:
========================================================

1. Codeforces Note:
    - For the division operation, print the result without fractions.
    - Example: 7 / 3 → 2
    - Using int types automatically discards the fractional part.

2. Integer Division:
    - When both operands are int, a / b produces integer division.

3. Division by Zero (/0):
    - Undefined behavior; program may crash.
    - Safe check:
        if (b != 0) cout << a / b;
        else cout << "Error: Division by zero!";

4. General Practice:
    - If floating-point result is needed:
        use (double)a / b

Example:
--------------------------------------------------------
Input: 7 / 3
Output: 2

Input: 5 / 0
Output: Error: Division by zero!

========================================================
*/

