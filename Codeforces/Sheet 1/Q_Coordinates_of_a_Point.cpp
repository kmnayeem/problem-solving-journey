#include<bits/stdc++.h>
using namespace std;

int main() 
{
    double x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) cout << "Origem" << endl;
    else if (x == 0) cout << "Eixo y" << endl;
    else if (y == 0) cout << "Eixo x" << endl;
    
    else if (x > 0 && y > 0) cout << "Q1" << endl;
    else if (x < 0 && y > 0) cout << "Q2" << endl;
    else if (x < 0 && y < 0) cout << "Q3" << endl;
    else if (x > 0 && y < 0) cout << "Q4" << endl;
    return 0;
}

/*
========================================================
Topic   : Point Location in 2D Plane
Author  : kmnayeem
========================================================

Mathematical Explanation:
--------------------------------------------------------

Let the point be (x, y)

1. Origin:
    - If x = 0 and y = 0
    - The point lies at (0, 0)

2. Axes:
    - If x = 0 → point lies on Y-axis
    - If y = 0 → point lies on X-axis

3. Quadrants:
    - Q1: x > 0, y > 0
    - Q2: x < 0, y > 0
    - Q3: x < 0, y < 0
    - Q4: x > 0, y < 0

========================================================
*/