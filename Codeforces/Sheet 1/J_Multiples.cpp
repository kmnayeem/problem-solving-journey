#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b;
    cin >> a >> b;

    // Short form using ternary operator:
    cout << ((a % b == 0 || b % a == 0) ? "Multiples" : "No Multiples");

    /*
        Equivalent long form:
        if (a % b == 0 || b % a == 0)
        {
            cout << "Multiples";
        }
        else
        {
            cout << "No Multiples";
        }
    */

    return 0;
}

/*
-----------------------------------------
|| (Logical OR):
-----------------------------------------
Returns true if at least one condition is true.

Example:
(5 > 3 || 2 > 10) → true (because one condition is true)

-----------------------------------------
Alternative keyword:
-----------------------------------------
"or" can be used instead of "||" in C++.
Both work the same:

(a % b == 0 || b % a == 0)
(a % b == 0 or b % a == 0)

-----------------------------------------
Author  : kmnayeem
-----------------------------------------
*/