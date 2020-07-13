/**
50A Domino piling
Link : https://codeforces.com/contest/50/problem/A

Date : March 28, 2020
*/

#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int M,N,sum,result;
    sum = result = 0;

    cin>>M;
    cin>>N;

    sum = M * N;

    result = sum / 2;

    cout<<result;

}

