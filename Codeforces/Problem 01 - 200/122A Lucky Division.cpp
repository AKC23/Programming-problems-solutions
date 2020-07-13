/**
122A Lucky Division
Link : https://codeforces.com/problemset/problem/122/A
Lesson learnt : Checking the numbers for lucky and almost lucky

*/


#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int i,n;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%447==0 || n%474==0 || n%477==0 ||n%744==0 || n%747==0)
        {
            cout<<"YES";
            break;
        }
        else
        {
            cout<<"NO";
            break;
        }
    }

    return 0;

}
