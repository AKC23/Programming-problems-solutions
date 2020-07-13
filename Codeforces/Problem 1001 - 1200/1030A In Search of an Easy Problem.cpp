/**
1030A In Search of an Easy Problem
https://codeforces.com/problemset/problem/1030/A
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,c;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==0)
        {
            c = 0;
            continue;
        }
        else if(x==1)
        {
            c = 1;
            break;
        }
    }

    if(c==0)
    {
        cout<<"EASY";
    }
    else
    {
        cout<<"HARD";
    }

    return 0;
}
