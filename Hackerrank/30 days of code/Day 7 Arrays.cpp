/*/
Day 7 Arrays
https://www.hackerrank.com/challenges/30-arrays/problem
/*/

#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    int B[N],i,j=0;

    for(i=0;i<N;i++)
    {
        cin>>A[i];
    }

    for(i=0,j=N-1;j>=0;j--,i++)
    {
        B[j] = A[i];
    }

    for(i=0;i<N;i++)
    {
        cout<<B[i]<<" ";
    }


}

