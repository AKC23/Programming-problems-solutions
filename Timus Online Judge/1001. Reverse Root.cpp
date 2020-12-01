
/*
Problem's name: 1001. Reverse Root
Problem's Link: https://acm.timus.ru/problem.aspx?space=1&num=1001
Problem's solution: https://acm.timus.ru/getsubmit.aspx/9150804.cpp
Date: 01/12/2020

Use of Setprecision: https://www.geeksforgeeks.org/precision-of-floating-point-numbers-in-c-floor-ceil-trunc-round-and-setprecision/
*/

#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include <math.h>
#include <cmath> 

using namespace std;

int main()
{
    vector<double> v;
    int i = 0;

    double n;

    while(cin>>n) 
    {
        v.push_back(n);
    }
    for(i=v.size()-1; i>=0; i--) 
    {
        cout<<setprecision(4)<<fixed<<sqrt(v[i])<<endl;
    }
    return 0;
}






