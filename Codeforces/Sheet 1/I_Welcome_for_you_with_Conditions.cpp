#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;
    // Short form (ternary operator)
    // condition ? value_if_true : value_if_false
    cout << (a >= b ? "Yes" : "No");
    /*
    Equivalent long form:
    if (a >= b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
*/
    return 0;
}

/*
-----------------------------------------
Author  : kmnayeem
-----------------------------------------
*/
