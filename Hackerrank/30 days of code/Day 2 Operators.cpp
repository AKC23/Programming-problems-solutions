/*/
Day 2 Operator
https://www.hackerrank.com/challenges/30-operators/problem

Lesson Learnt : Use of round() in #include<cmath>
Output Format

Print the total meal cost, where totalCost is the rounded integer result of the entire bill (mealCost with added tax and tip).

/*/
#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstdio>
using namespace std;


int main()
{
    double mealCost;
    cin >> mealCost;

    int tipPercent;
    cin >> tipPercent;

    int taxPercent;
    cin >> taxPercent;

    double total;
    double tip,tax;

/*/
    cout<<"\nMealCost = "<<mealCost;
    cout<<"\ntipPercent = "<<tipPercent;
    cout<<"\ntaxPercent = "<<taxPercent;
/*/
    tip = (mealCost * tipPercent) / 100;
    tax = (mealCost * taxPercent) / 100;
/*/
    cout<<"\ntip = "<<tip;
    cout<<"\ntax = "<<tax;
/*/

    total = round(mealCost + tip + tax);
    cout<<total;

/*/
    round = total;
    cout<<endl<<round;
/*/

    return 0;
}
