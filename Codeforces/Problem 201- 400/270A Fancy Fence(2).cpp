/*
Problem's name: 270A Fancy Fence
Problem's link: https://codeforces.com/problemset/problem/270/A
Submission's link: https://codeforces.com/problemset/submission/270/100187774
Date: Wesnesday, December 02,2020
*/
#include<bits/stdc++.h>
#include <iostream>  
#include<sstream>

using namespace std;

int main()
{
 
    int t;
    float n;
    cin>>t;

    while(t)
    {
        t--;
        cin>>n;
        float res= 360/(180-n);
        if( ceil(res) != res )
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        } 
    }
    return 0;
}
