/**
228A Is your horseshoe on the other hoof?
Link : https://codeforces.com/problemset/problem/228/A
*/


#include<stdio.h>
#include<bits/stdc++.h>             //Header file for sorting
#include<iostream>

using namespace std;

int main()
{
    int a[4];
    int i,c;
    i = c = 0;

    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }

    sort(a,a+4);                    //sorting - ascending order

    for(i=0;i<4;i++)
    {
        if(a[i] == a[i+1])
        {
            c++;                    //if two numbers are same then c = c + 1
        }
    }


    cout<<c;

    return 0;
}
