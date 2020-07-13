/**
116A Tram
Link : https://codeforces.com/problemset/problem/116/A
*/

#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n,a,b,i,s1,s2;

    n = a = b = i = s1 = s2 = 0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a;
        cin>>b;

        s1 = s1 + (b-a);

        if(s2<s1)
        {
            s2 = s1;
        }
    }

    cout<<s2<<endl;

    return 0;
}
