/*
    Author : kmnayeem
    Description :
    This program prints a Hollow Pyramid star (*) pattern.

    Example Input:
    5

    Example Output:
        *
       * *
      *   *
     *     *
    *********

    Pattern Explanation:
    Row 1 -> 4 spaces + 1 star
    Row 2 -> 3 spaces + 2 stars
    Row 3 -> 2 spaces + 2 stars
    Row 4 -> 1 space  + 2 stars
    Row 5 -> 0 spaces + 9 stars

    Space Rule: n - i
    Star Rule : 2*i - 1 (with boundary logic)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space = n - 1;
    int star = 1;
    for(int i=1; i<=n; i++)
    {
        // print spaces
        for(int j=1; j<=space; j++)
        {
            cout << " ";
        }
        // print stars with hollow logic
        for(int j=1; j<=star; j++)
        {
            if(i == n)
                cout << "*";
            else
            {
                if(j == 1 || j == star)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << '\n';
        star += 2;
        space--;
    }
    return 0;
}

