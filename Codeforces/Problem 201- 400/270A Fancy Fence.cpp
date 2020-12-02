/*
Problem's name: 270A Fancy Fence
Problem's link: https://codeforces.com/problemset/problem/270/A
Submission's link: https://codeforces.com/contest/270/submission/100185437
Date: Wesnesday, December 02,2020
*/
#include<bits/stdc++.h>
#include <iostream>  
#include<sstream>

using namespace std;

int main()
{
    int t,n,res1,i;
    i = t = n = res1 = 0;
    cin>>t;

    while(t)
    {
        t--;
        cin>>n;
        //if it is a whole number then it is an polygon
        if( (360 % (180 - n) )  == 0 )              
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }       

    return 0;
}

