#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    
    // Check if the character is a digit
    if (x >= '0' && x <= '9') 
    {
        cout << "IS DIGIT" << endl;
    } 
    
    // Check if the character is an alphabet letter
    else if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) 
    {
        cout << "ALPHA" << endl;

        // Further check if it is uppercase or lowercase
        if (x >= 'A' && x <= 'Z') 
        {
            cout << "IS CAPITAL" << endl;
        } 
        else
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}

/*
========================================================
Topic   : Character Classification (Digit / Alphabet)
Author  : kmnayeem
========================================================

Explanation:
--------------------------------------------------------
1. Digit Check:
    - A character is a digit if it is between '0' and '9'.
    - ASCII values: '0' = 48, '9' = 57.

2. Alphabet Check:
    - Uppercase letters: 'A' to 'Z' (ASCII 65–90)
    - Lowercase letters: 'a' to 'z' (ASCII 97–122)
    - If x is an alphabet, first print "ALPHA"
    - Then determine case:
        - 'A'–'Z' → "IS CAPITAL"
        - 'a'–'z' → "IS SMALL"

3. Logical Operators:
    - && → Logical AND (both conditions must be true)
    - || → Logical OR (either condition can be true)

Example:
--------------------------------------------------------
Input: G
Output:
ALPHA
IS CAPITAL

Input: g
Output:
ALPHA
IS SMALL

Input: 5
Output:
IS DIGIT

========================================================
*/