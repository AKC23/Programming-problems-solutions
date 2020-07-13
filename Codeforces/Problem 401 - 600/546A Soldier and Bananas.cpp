/**
546A Soldier and Bananas
Link : https://codeforces.com/problemset/problem/546/A
*/

#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    long int k,n,w,i,sum;

    k = n = w = i = sum = 0;
    cin>>k;
    cin>>n;
    cin>>w;

    for(i=1; i<=w; i++)
    {
//        k = k * i;
        sum = sum + (k * i);
    }

    if(n>=sum)
    {
        cout<<"0";      /** If he doesn't have to borrow money, output 0. */
    }
    else if(sum>n)
    {
        cout<<sum-n;
    }

    return 0;
}
