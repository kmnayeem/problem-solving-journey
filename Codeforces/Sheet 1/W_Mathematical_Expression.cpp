/*
 ============================================================================
 Author      : kmnayeem
 Topic       : Expression Validator (A op B = C)
 Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
 ============================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b,c;
    char s, eq;
    cin >> a >> s >> b >> eq >> c;
    int result;
    if (s == '+')
        result = a + b;
    else if (s == '-')
        result = a - b;
    else if (s == '*')
        result = a * b;

    if (result == c)
        cout << "Yes";
    else
        cout << result;
    return 0;
}

/*
========================================================
 Notes:
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
