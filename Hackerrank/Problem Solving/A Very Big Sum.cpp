/*/
A very Big Sum
Learnt : use of long int

/*/
#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main()
{
    long long int n=5;
    cin>>n;
    long long int ar[n];
    long long int i,sum=0;

    for(i=0; i<n; i++)
    {
        cin>>ar[i];
        sum = sum + ar[i];
    }

    cout<<sum;
}

