#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int firstDigit = x / 1000;
    // condition ? value_if_true : value_if_false
    cout << (firstDigit % 2 == 0 ? "EVEN" : "ODD");
    return 0;
}

/*
========================================================
Topic   : Check First Digit Parity
Author  : kmnayeem
========================================================

1. Input Constraint (Codeforces):
    - 1000 < x ≤ 9999
    - So x is always a 4-digit number.

2. Why divide by 1000:
    - A 4-digit number ABCD can be written as:
        ABCD / 1000 = A
        1234 / 1000 = 1
    - This extracts the first digit.

========================================================
*/
