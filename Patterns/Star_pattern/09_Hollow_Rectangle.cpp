/*
    Author : kmnayeem
    Description :
    This program prints a Hollow Rectangle star (*) pattern.

    Example Input:
    rows = 4
    columns = 7

    Example Output:
    *******
    *     *
    *     *
    *******

    Pattern Explanation:
    - First row → full stars
    - Last row → full stars
    - Middle rows → star + spaces + star

    Logic Idea:
    "Am I on the border? If yes → star, else → space"
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=columns; j++)
        {
            if(i == 1 || i == rows || j == 1 || j == columns)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}

/*
    Difference: Hollow Square vs Hollow Rectangle

    Square:
    - n x n (i and j both equal range)
    - i == 1 || i == n || j == 1 || j == n

    Rectangle:
    - rows x columns (different range)
    - i == 1 || i == rows || j == 1 || j == columns
*/