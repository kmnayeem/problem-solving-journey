/*
    Author : kmnayeem
    Description :
    This program prints an Inverted Left Half Pyramid star (*) pattern.

    Example Input:
    5

    Example Output:
    *****
    ****
    ***
    **
    *

    Pattern Explanation:
    Row 1 -> 5 stars
    Row 2 -> 4 stars
    Row 3 -> 3 stars
    Row 4 -> 2 stars
    Row 5 -> 1 star
*/

#include<bits/stdc++.h>
// Include all standard C++ libraries
using namespace std;
// Allow us to use cin, cout without writing std::
int main()
{
    int n;
    cin >> n;
    int star = n;
    // start with maximum stars
    for(int i = 1; i <= n; i++)
    // outer loop for rows
    {
        for(int j = 1; j <= star; j++)
        // inner loop for stars
        {
            cout << '*';
            // print star
        }
        cout << '\n';
        // next line
        star--;
        // decrease stars for next row
    }
    return 0;
}

/*
==================== OPTIMIZED VERSION ====================

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}

====================================================================
*/

//Time Complexity  : O(n^2)