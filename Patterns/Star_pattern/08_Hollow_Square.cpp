/*
    Author : kmnayeem
    Description :
    This program prints a Hollow Square star (*) pattern.

    Example Input:
    5

    Example Output:
    *****
    *   *
    *   *
    *   *
    *****

    Pattern Explanation:
    We are drawing a square grid of size n × n.

    Rule:
    - First row, last row → full stars
    - First column, last column → stars
    - Inside → spaces

    Logic Idea:
    "Am I on the border? If yes → star, else → space"
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i == 1 || i == n || j == 1 || j == n)
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