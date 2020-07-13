/**
136A Presents
https://codeforces.com/problemset/problem/136/A

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[100],i,j,n;

    cin>>n;
    ar[n];

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(j=1;j<=n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(ar[i] == j)
            {
                cout<<i + 1<<" ";
            }
        }
    }

    return 0;

}
