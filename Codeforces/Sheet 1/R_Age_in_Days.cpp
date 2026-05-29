#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long int  n;
    cin >> n;

    long long int year = n / 365;
    long long int remaining_days = n % 365;
    long long int month = remaining_days / 30;
    long long int day = remaining_days % 30;

    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;
    return 0;
}

/*
========================================================
Topic   : Age Conversion (Days to Years, Months, Days)
Author  : kmnayeem
========================================================

Formulas:
--------------------------------------------------------
year = n / 365

remaining_days = n % 365

month = remaining_days / 30

day = remaining_days % 30

Example:
--------------------------------------------------------
Input:
    n = 400

Calculation:
    year = 400 / 365 = 1
    remaining_days = 400 % 365 = 35

    month = 35 / 30 = 1
    day = 35 % 30 = 5

Output:
    1 years
    1 months
    5 days

========================================================
*/