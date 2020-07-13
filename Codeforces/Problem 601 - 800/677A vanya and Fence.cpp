/**
677A. Vanya and Fence
Link : https://codeforces.com/problemset/problem/677/A
*/


#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int i,n,h,c,ar[10000];
    i = j = n = h = c = 0;

    cin>>n>>h;

    ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(i=0;i<n;i++)
    {
        if(ar[i]<=h)
        {
            c++;
        }
        else
        {
            c = c + 2;
        }
    }

    cout<<c;


    return 0;
}

