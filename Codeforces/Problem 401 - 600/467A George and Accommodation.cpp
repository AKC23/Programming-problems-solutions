/**
467A George and Accommodation
Link : https://codeforces.com/problemset/problem/467/A

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,q,i,c,n;
    i = c = p = q = n = 0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>p>>q;
        if(p<=q && q-p>=2)
        {
            c++;
        }
    }

    cout<<c;
    return 0;
}
