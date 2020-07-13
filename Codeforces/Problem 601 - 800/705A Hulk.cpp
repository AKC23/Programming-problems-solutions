/**
705A Hulk
https://codeforces.com/problemset/problem/705/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,n,x,c;
    i = c = n = 1;

    cin>>n;


    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            c = 2;
        }

        if(c==1)
        {
            cout<<"I hate ";
        }
        else if(c==2)
        {
            cout<<"that I love ";
        }
        else
        {
            cout<<"that I hate ";
        }

        c++;
    }

    cout<<"it";
    return 0;
}

