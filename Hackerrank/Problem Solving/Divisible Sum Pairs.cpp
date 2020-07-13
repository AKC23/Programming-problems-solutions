/*/
Divisible Sum Pairs
/*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int i,j,m = 0,a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (((a[i] + a[j]) % k) == 0 )
            {
                m++;
            }
        }
    }

    cout<<m<<endl;
    return 0;
}


