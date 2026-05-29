#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (x >= 'a' && x <= 'z')
    {
        x = x-32;
        cout << x;
    }
    else
    {
        x = x+32;
        cout << x;
    }
    return 0;
}

/*
========================================================
Topic   : Toggle Character Case (Manual + Built-in)
Author  : kmnayeem
========================================================

Explanation:
--------------------------------------------------------

1. ASCII Idea:
    - Uppercase letters: 'A' to 'Z' → 65–90
    - Lowercase letters: 'a' to 'z' → 97–122
    - Difference between them = 32

2. Why use +32 / -32:
    - To convert case manually using ASCII values.
    - Lowercase → Uppercase : subtract 32

    Example: 'g'(103) - 32 = 71 → 'G'
    - Uppercase → Lowercase : add 32
    Example: 'D'(68) + 32 = 100 → 'd'

3. Alternative:
    - Use built-in functions instead of manual logic:
        * toupper(x) → converts to uppercase
        * tolower(x) → converts to lowercase
    - These are safer and cleaner.
    - Available in <cctype>.

========================================================
*/
