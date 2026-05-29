/*
    PROBLEM:
    --------
    Given a number n, find the sum:
        1 + 2 + 3 + ... + n

    This file shows:
    APPROACH 1: Brute force approach (for learning)
    APPROACH 2: Optimized mathematical approach (final solution)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;

    /*
        ================================
        APPROACH 1: BRUTE FORCE (O(n))
        ================================

        Idea:
        We start from 1 and go up to n,
        adding each number to sum.
        sum = 1 + 2 + 3 + ... + n
    */

    /*
    long long int sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
    */

    /*
        WHY BRUTE FORCE IS NOT USED:

        1. Time Complexity = O(n)
            → If n = 10^9, it performs 1 billion operations.
        2. This leads to Time Limit Exceeded (TLE)
            in competitive programming.
        3. Therefore, it is not suitable for large constraints.
    */


    /*
        ================================
        APPROACH 2: OPTIMIZED (O(1))
        ================================

        We use the mathematical formula:

            1 + 2 + 3 + ... + n = n * (n + 1) / 2

        Idea (Gauss Trick):
        Pair numbers from both ends:

            1 + n = n + 1
            2 + (n-1) = n + 1
            3 + (n-2) = n + 1

        Each pair has the same sum → (n + 1)
        Number of pairs = n / 2
        So total sum = n * (n + 1) / 2
    */

    cout << n * (n + 1) / 2 << endl;
    return 0;
}

/*
    ==========================================
    FAST IO EXPLANATION (COMPETITIVE PROGRAMMING)
    ==========================================

    ios::sync_with_stdio(false);
        → Disconnects C++ I/O from C I/O
        → Makes cin/cout faster

    cin.tie(nullptr);
        → Unties cin from cout
        → Prevents automatic flushing before input
        → Improves execution speed

    NOTE:
    These do NOT change logic, only performance.
*/