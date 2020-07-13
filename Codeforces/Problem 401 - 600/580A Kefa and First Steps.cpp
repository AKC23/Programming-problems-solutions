/**
580A Kefa and First Steps
https://codeforces.com/problemset/problem/580/A

Lesson Learnt :
1. Frist dynamic program
2. Maximum non-decreasing subsegment in sequence
3. Use of max function
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    long long int n,i,c,t,m;

    n = i = c = t = 0;
    m = 1;

    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i] >= a[i-1])
        {
            c++;
//            if(c>m)
//            {
//                m = c;
//            }
            m = max(m,c);
        }
        else
        {
            c = 1;
        }
    }

    cout<<m;

    return 0;
}
