#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    long long start = max(l1, l2);
    long long end = min(r1, r2);

    if (start <= end) 
        cout << start << " " << end << endl;
    else 
        cout << -1 << endl;

    return 0;
}

/*
========================================================
Topic   : Interval Intersection
Author  : kmnayeem
========================================================

Concept: Why we use min() and max()

1. Start of intersection:
    - start = max(l1, l2)
    - The intersection can only start after both intervals have started
    - max() returns the later (larger) starting point

    Example:
    [1, 15] and [5, 27] → max(1, 5) = 5 → correct start

2. End of intersection:
    - end = min(r1, r2)
    - The intersection must end before either interval ends
    - min() returns the earlier (smaller) ending point

    Example:
    [1, 15] and [5, 27] → min(15, 27) = 15 → correct end

3. Check for intersection:
    - If start <= end → intersection exists
    - Else → no overlap → print -1

Intuition:
- max() → ensures we start after both intervals have begun
- min() → ensures we end before either interval ends

========================================================
*/