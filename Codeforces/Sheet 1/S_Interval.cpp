#include<bits/stdc++.h>
using namespace std;
int main() 
{
    double x;
    cin >> x;

    if (x >= 0 && x <= 25)
        cout << "Interval [0,25]" << endl;
    else if (x > 25 && x <= 50)
        cout << "Interval (25,50]" << endl;
    else if (x > 50 && x <= 75)
        cout << "Interval (50,75]" << endl;
    else if (x > 75 && x <= 100)
        cout << "Interval (75,100]" << endl;
    else
        cout << "Out of Intervals" << endl;

    return 0;
}

/*
========================================================
Topic   : Interval Classification
Author  : kmnayeem
========================================================

Mathematical Explanation:
--------------------------------------------------------

Let X be the given number.

We check the following conditions:

1. Interval [0,25]
    - 0 ≤ X ≤ 25
    - Both 0 and 25 are included

2. Interval (25,50]
    - 25 < X ≤ 50
    - 25 is NOT included, but 50 is included

3. Interval (50,75]
    - 50 < X ≤ 75
    - 50 is NOT included, but 75 is included

4. Interval (75,100]
    - 75 < X ≤ 100
    - 75 is NOT included, but 100 is included

5. Out of Intervals
    - X < 0 OR X > 100
    - No defined interval covers these values

========================================================
*/
