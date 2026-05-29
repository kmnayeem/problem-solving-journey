#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    bool ok = false;
    if (s == '>') 
    {
        if (a > b) ok = true;
    } 
    else if (s == '<') 
    {
        if (a < b) ok = true;
    } 
    else if (s == '=') 
    {
        if (a == b) ok = true;
    }

    if (ok) 
    {
        cout << "Right" << endl;
    } 
    else 
    {
            cout << "Wrong" << endl;
    }
    return 0;
}

/*
========================================================
Topic   : Comparison Checker (Using Boolean Flag)
Author  : kmnayeem
========================================================

Concept: Boolean (bool) & Flag Variable

- 'bool ok' is used as a flag variable to store the result of the comparison.
- A flag variable is used to track whether a condition is satisfied or not.

Working:
- Initially, ok = false (assume comparison is incorrect)
- If the given condition becomes true:
    → ok is set to true
- After evaluation:
    → if ok == true  → output "Right"
    → if ok == false → output "Wrong"

Why bool is used:
- It can store only two values: true or false
- Makes condition tracking simple, clean, and efficient
========================================================
*/