#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,i=0,c=0;
    int a1,a2,a3;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a1;
        cin>>a2;
        cin>>a3;

        if(a1+a2+a3 >= 2)
        {
            c++;
        }
    }
        cout<<c;

    return 0;
}
