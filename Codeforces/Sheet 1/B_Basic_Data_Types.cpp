/*
    ========================================================
    Author  : kmnayeem
    Topic   : Data Types and Input/Output
    Problem : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B
    ========================================================
*/

#include <bits/stdc++.h> 
// Includes all standard C++ libraries
using namespace std;
//Allow us to use cin, cout without writing std::
int main() 
{
    // Variable declarations with different data types
    int i;               // Integer type
    long long int ll;    // Large integer type
    char ch;             // Character type
    float f;             // Floating point number
    double d;            // Double precision floating point number

    // Taking input from the user
    cin >> i >> ll >> ch >> f >> d;
    // Printing each value on a new line
    cout << i << endl;
    cout << ll << endl;
    cout << ch << endl;
    cout << f << endl;
    cout << d << endl;
    return 0;
}
