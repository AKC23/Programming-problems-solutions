/*
Problem's name: 460A Vasya and Socks
Problem's link: https://codeforces.com/problemset/problem/460/A

Submission's link: https://codeforces.com/contest/460/submission/96427285
Date: Friday, October 23,2020

@Ahmadul Karim Chowdhury
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,i,m,count;

    n = m = i = count = 0;

    cin>>n>>m;

    for(i=1;i<=n;i++)
    {
        if(i%m == 0)
        {
            n++;                                //n will be increased gradually
        }
    }
    cout<<n;

    return 0;
}
