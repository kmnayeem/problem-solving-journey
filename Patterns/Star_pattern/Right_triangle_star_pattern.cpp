/*
    Author : kmnayeem
    Description :
    This program prints a right-angled triangle star (*) pattern.

    Example Input:
    5

    Example Output:
    *
    **
    ***
    ****
    *****

    Pattern Explanation:
    Row 1 -> 1 star
    Row 2 -> 2 stars
    Row 3 -> 3 stars
    Row 4 -> 4 stars
    Row 5 -> 5 stars
*/

#include<bits/stdc++.h>
//Include all standerd C++ libraries
using namespace std;
//Allow us to use cin, cout without writing std::
int main()
{
    int n, star = 1;
    cin >> n;
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
        star++;
        // increase stars for next row
    }
    return 0;
}
