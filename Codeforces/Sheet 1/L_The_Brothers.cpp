#include<bits/stdc++.h>
using namespace std;

int main()
{
    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;

    // sort():
    // By default, sorts characters in ascending order (A → Z / a → z)
    // Example: "dcba" → "abcd"
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Short form using ternary operator:
    // condition ? value_if_true : value_if_false
    cout << (s1 == s2 ? "ARE Brothers" : "NOT");

    return 0;
}

/*
========================================================
Topic   : String Sorting & Comparison
Author  : kmnayeem
========================================================

sort() - Descending Order:
--------------------------------------------------------
To sort a string in descending order, use:

    sort(s.begin(), s.end(), greater<char>());

Example:
    "abcd" → "dcba"

Explanation:
--------------------------------------------------------
greater<char>() changes the default ascending order
into descending order by reversing the comparison logic.

========================================================
*/