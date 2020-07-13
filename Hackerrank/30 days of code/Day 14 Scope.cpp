/*/
Day 14: Scope
Incomplete(!!!)
https://www.hackerrank.com/challenges/30-scope/problem

/*/

#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    int b[N],i,j,max=1;

    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            b[j]= abs(arr[j]-arr[i]);
            if (b[j]>max)
            {
                max = b[j];
            }
        }

    }

    cout<<max;
}
