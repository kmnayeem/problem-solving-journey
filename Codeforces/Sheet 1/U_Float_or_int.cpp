#include <bits/stdc++.h>
using namespace std;
int main() 
{
    double n;
    cin >> n;
    int intpartn = n;
    double result = n - intpartn;
    if (result == 0) 
        cout << "int " << intpartn << endl;
    else 
        cout << "float " << intpartn << " " << result << endl;
    return 0;
}

/*
========================================================
Topic   : Integer or Float Detection
Author  : kmnayeem
========================================================

Key Idea:
- Input is taken as a double to support both integer and floating values
- The number is split into integer and fractional parts

Concepts:

1. intpartn:
    - Stores the integer part of the number
    - Obtained by assigning double → int (decimal is truncated)

2. result:
    - Stores the fractional part of the number
    - Calculated as: result = n - intpartn

3. Comparison:
    - If result == 0 → the number has no decimal part (integer)
    - If result != 0 → the number has a fractional part (float)

========================================================
*/