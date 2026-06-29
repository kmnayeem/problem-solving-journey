/*
================================================================
Author      : kmnayeem
Problem     : Three Numbers
Link        : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

Description :
Given two numbers K and S.

Count how many ordered triples (X, Y, Z) exist such that:
- 0 ≤ X, Y, Z ≤ K
- X + Y + Z = S

We must count all valid combinations.

Constraints :
0 ≤ K ≤ 3000
0 ≤ S ≤ 3K
================================================================
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    // Try all possible values of X
    for(int x = 0; x <= k; x++)
    {
        // Try all possible values of Y
        for(int y = 0; y <= k; y++)
        {
            int z = s - x - y;
            // Check if Z is valid
            if(z >= 0 && z <= k)
            {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}

/*
Time Complexity  : O(K^2)
Space Complexity : O(1)
*/