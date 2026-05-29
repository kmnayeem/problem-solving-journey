/*
============================================================================
    Author      : kmnayeem
    Topic       : Ternary Operator - Multiples Check
    Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
============================================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b;
    cin >> a >> b;
    // Check if one number is a multiple of the other using ternary operator
    cout << ((a % b == 0 || b % a == 0) ? "Multiples" : "No Multiples");
    /*
     * Equivalent long-form using if-else:
     *
     * if (a % b == 0 || b % a == 0) {
     *     cout << "Multiples";
     * } else {
     *     cout << "No Multiples";
     * }
     */
    return 0;
}

/*
    Logic:
    ----------
    1. A number 'x' is a multiple of another number 'y' if x % y == 0.
        - Example: 12 % 3 == 0 → 12 is a multiple of 3
    
    2. Since we want to check if either number is a multiple of the other:
        - Check a % b == 0 → Is 'a' divisible by 'b'?
        - Check b % a == 0 → Is 'b' divisible by 'a'?
    
    3. Use the logical OR (||) to combine the two conditions:
        - If at least one is true, then one number is a multiple of the other.
    
    4. Ternary operator is used to print the result concisely:
        - If condition is true → print "Multiples"
        - Else → print "No Multiples"
*/

/*
============================================================================
Notes:
============================================================================
    Logical OR (||):
        - Returns true if at least one condition is true.
        - Example: (5 > 3 || 2 > 10) → true

    Alternative keyword:
        - In C++, 'or' can be used instead of '||'
        - Example: (a % b == 0 or b % a == 0)

    Time Complexity:
        - O(1) since only a few arithmetic operations are performed.
============================================================================
*/
