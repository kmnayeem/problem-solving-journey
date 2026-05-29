/*
    ========================================================
    Author  : kmnayeem
    Problem : Power Comparison (A^B vs C^D)
    Link    : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
    ========================================================
*/
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    /*
        ================================
        APPROACH 1: BRUTE FORCE (WRONG)
        ================================

        Idea:
        Directly compute and compare:

            A^B and C^D

        Example (conceptually):
            pow(a, b) > pow(c, d)
    */

    /*
        WHY BRUTE FORCE FAILS:

        1. OVERFLOW:
            - A^B and C^D grow extremely large
            - They exceed the range of standard data types

        2. FLOATING POINT PRECISION ERROR:
            - pow() uses double precision arithmetic
            - For large exponents, precision is lost
            - Small errors can change comparison results

        3. CONCLUSION:
            Direct computation using pow(a,b) and pow(c,d)
            is not reliable for constraints with large exponents
    */


    /*
        ================================
        APPROACH 2: OPTIMIZED (USED)
        ================================

        KEY IDEA:
        We transform the comparison using exponent properties:

            A^B > C^D

        Take D-th root on both sides:

            (A^B)^(1/D) > C
            A^(B/D) > C

        So instead of computing A^B and C^D directly,
        we compare:

            pow(A, B/D) > C

        This keeps values within a safe computational range
        and avoids overflow.
    */

    if (pow(a, b / d) > c) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}

/*
    ========================================================
    FINAL INTUITION:
    ========================================================

    - Direct exponentiation is not feasible for large values
    - Floating point pow(a,b) introduces precision issues
    - We reduce the comparison using exponent rules
    - Final comparison is done on a transformed expression:
        A^(B/D) vs C
    - This ensures computational safety and correctness
*/
