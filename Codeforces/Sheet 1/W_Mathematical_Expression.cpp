#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int A, B, C;
    char S, eq;
    cin >> A >> S >> B >> eq >> C;
    int result;
    if (S == '+')
        result = A + B;
    else if (S == '-')
        result = A - B;
    else if (S == '*')
        result = A * B;

    if (result == C)
        cout << "Yes";
    else
        cout << result;
    return 0;
}

/*
========================================================
Topic   : Expression Validator (A op B = C)
Author  : kmnayeem
========================================================

Concept:
- Evaluate the expression A op B and compare it with C

Details:
- op represents the arithmetic operator
- Supported operators: +, -, *

Output:
- Print "Yes" if the expression is correct
- Otherwise, print the correct result of the expression

========================================================
*/