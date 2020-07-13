/*/

/*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n=10,k1=0,k2=0;
    cin>>n;

    int i,a[n],min,max;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    max = a[0];
    for(i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max = a[i];
            k1++;
        }
    }

    min = a[0];
    for(i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min = a[i];
            k2++;
        }
    }

    cout<<k1<<" "<<k2<<endl;

    return 0;
}
