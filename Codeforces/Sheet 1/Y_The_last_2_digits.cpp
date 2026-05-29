/*
    ========================================================
    Author  : kmnayeem
    Problem : Last Two Digits of Multiplication
    ========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    /*
        ================================
        APPROACH 1: BRUTE FORCE (WRONG)
        ================================

        Idea:
        Multiply all numbers directly:

            result = a * b * c * d

        Then take last 2 digits:

            result % 100
    */

    /*
    long long result = a * b * c * d;
    cout << result % 100;
    */

    /*
        WHY BRUTE FORCE FAILS:

        1. INTEGER OVERFLOW:
            - Maximum value:
                10^9 * 10^9 * 10^9 * 10^9 = 10^36

            - But long long max is:
                ≈ 9 × 10^18

            → So multiplication overflows BEFORE %100

        2. WRONG ANSWER PROBLEM:
            - Once overflow happens, value becomes incorrect
            - Taking %100 after overflow does NOT fix it

        3. CONCLUSION:
            Brute force is NOT reliable for large constraints
    */


    /*
        ================================
        APPROACH 2: OPTIMIZED (CORRECT)
        ================================

        KEY IDEA:
        We only need last 2 digits → modulo 100

        Mathematical Property:
            (a * b) % 100 = ((a % 100) * (b % 100)) % 100

        So we reduce each number first:

            a %= 100;
            b %= 100;
            c %= 100;
            d %= 100;

        Now each number is small:
            0 ≤ value ≤ 99

        Maximum multiplication:
            99 * 99 * 99 * 99 = 96,059,601

        → This safely fits in long long
        → No overflow occurs
    */
    
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    long long multi = a * b * c * d;
    long long result = multi % 100;
    if (result < 10)
    cout << "0" << result;
    else
    cout << result;
    return 0;
}

/*
    ==========================================
    FINAL INTUITION:
    ==========================================

    - We don't need full numbers
    - We only care about last 2 digits
    - So we use modulo 100 at every step
    - This prevents overflow and keeps correctness
    - If the last 2 digits are a single-digit number (0-9),
        we print a leading '0' to always show 2 digits.
        Example: 7 → "07", 0 → "00"
    - This ensures output format matches the problem requirement
*/