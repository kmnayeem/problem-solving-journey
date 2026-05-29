#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    // Find minimum value
    if (a <= b && a <= c)
        cout << a << " ";
    else if (b <= a && b <= c)
        cout << b << " ";
    else
        cout << c << " ";

    // Find maximum value
    if (a >= b && a >= c)
        cout << a;
    else if (b >= a && b >= c)
        cout << b;
    else
        cout << c;

    return 0;
}

/*
-----------------------------------------
if-else without {}:
-----------------------------------------
You can skip braces ONLY when there is a single statement.

Example:
if (a > b)
    cout << a;
else
    cout << b;

-----------------------------------------
Rule:
-----------------------------------------
Without {} only the next single statement
is controlled by if/else.

If there are multiple statements, {} is required.

Example:
if (a > b)
{
    cout << a;
    cout << " is bigger";
}

-----------------------------------------
Author  : kmnayeem
-----------------------------------------
*/