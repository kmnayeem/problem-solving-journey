#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    // Calculating the difference between (a * b) and (c * d)
    long long diff = (a * b) - (c * d);
    cout << "Difference = " << diff;
    return 0;
}