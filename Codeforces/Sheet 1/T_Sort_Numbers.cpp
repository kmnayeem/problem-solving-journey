/*
 ============================================================================
 Author      : kmnayeem
 Topic       : Sorting Using Vector
 Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
 ============================================================================
*/

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    // Vector: a dynamic array from STL
    // It stores elements in contiguous memory and resizes automatically
    vector<int>v = {a, b, c};
    sort(v.begin(), v.end());
    for(auto num : v) 
    {
        cout << num << endl;
    }
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}

/*
========================================================
Key Concepts:
========================================================

1. Vector:
    - A dynamic array provided by the C++ STL (Standard Template Library)
    - Can grow or shrink automatically
    - Stores elements in contiguous memory

2. Sorting:
    - sort(v.begin(), v.end()) sorts elements in ascending order
    - Internally uses Introsort (QuickSort + HeapSort + Insertion Sort)

3. Range-based for loop:
    - Simplifies iteration over containers
    - Syntax: for (auto element : container)

4. auto keyword:
    - Compiler automatically deduces variable type
    - Improves readability and reduces verbosity

    
 * Time Complexity:
 * ----------------
 * O(n log n)
 * - Sorting the vector takes O(n log n), where n = number of elements (here n = 3).

 * Space Complexity:
 * -----------------
 * O(n)
 * - A vector of size n is used to store the elements.
 * - Extra auxiliary space for sorting is minimal (in-place sort, but vector storage is required).
 
========================================================
*/



 
