/*
    Author : kmnayeem
    Description :
    This program prints a inverted/reverse right-angled triangle star (*) pattern.

    Example Input:
    5

    Example Output:
    *****
    ****
    ***
    **
    *

    Pattern Explanation:
    Row 1 -> n stars
    Row 2 -> n-1 stars
    Row 3 -> n-2 stars
    Row 4 -> n-3 stars
    Row 5 -> 1 star
*/

#include<bits/stdc++.h>
//Include all standerd C++ libraries
using namespace std;
//Allow us to use cin, cout without writing std::
int main()
{
    int n;
    cin >> n;
    int star = n;
    // start with maximum stars (first row has n stars)
    for(int i=1; i<=n; i++)
    // outer loop for rows
    {
        for(int j=1; j<=star; j++)
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
