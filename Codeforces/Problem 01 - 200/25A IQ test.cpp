/*
Problem's name: 25A IQ test
Problem's link: https://codeforces.com/problemset/problem/25/A

Submission's link:
Date: November 8, 2020

@Ahmadul Karim Chowdhury
*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<algorithm>
#include<list>
#include<queue>
using namespace std;

int main()
{
    long long int n,i,j1,j2;
    n = i = j1 = j2 = 0;

    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]%2 == 0)
        {
            j1++;                       //j1 for even
        }
        else
        {
            j2++;                       //j2 for odd
        }
    }

//    cout<<j1<<" "<<j2<<endl;

    if(j1>j2)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2 != 0)
            {
                j1 = i + 1;               //j1 for odd
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2 == 0)
            {
                j1 = i + 1;               //j1 for even
            }
        }
    }

    cout<<j1;

    return 0;
}
