/*
 ============================================================================
 Author      : kmnayeem
 Topic       : String Sorting & Comparison
 Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
 ============================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;

    // sort():
    // By default, sorts characters in ascending order (A → Z / a → z)
    // Example: "dcba" → "abcd"
    // We are only interested in comparing the last names.
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Short form using ternary operator:
    // condition ? value_if_true : value_if_false
    cout << (s1 == s2 ? "ARE Brothers" : "NOT");

    return 0;
}

/*
 ============================================================================
 Notes:
 ============================================================================
 * sort() - Default (Ascending Order)
 * ----------------------------------
 * Syntax:
 *     sort(str.begin(), str.end());
 *
 * Example:
 *     "dcba" → "abcd"
 *
 * sort() - Descending Order
 * -------------------------
 * Syntax:
 *     sort(str.begin(), str.end(), greater<char>());
 *
 * Example:
 *     "abcd" → "dcba"
 *
 * Ternary Operator
 * ----------------
 * Syntax:
 *     condition ? value_if_true : value_if_false
 *
 * Example:
 *     cout << (a > b ? a : b);
 *
 * Time Complexity:
 *     O(n log n)
 *
 * Space Complexity:
 *     O(1)
 ============================================================================
*/
