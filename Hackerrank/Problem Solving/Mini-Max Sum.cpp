/*/
Min - Max Sum
Learnt : use of long int, find the some of minimum and maximum in a code
https://www.hackerrank.com/challenges/mini-max-sum/problem?h_r=next-challenge&h_v=zen
/*/
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main()
{
    long long int n=5;
    long long int ar[n];
    long long int i,j,k,sum=0,maxi=0,mini=0;

    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(ar[j]>=ar[j+1])
            {
                k = ar[j+1];
                ar[j+1]=ar[j];
                ar[j]=k;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        sum = sum + ar[i];
    }

    mini = sum - ar[4];
    maxi = sum - ar[0];


    cout<<mini<<" ";
    cout<<maxi;

}
