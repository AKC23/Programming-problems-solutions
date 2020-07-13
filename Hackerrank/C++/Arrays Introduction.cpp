#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
//    cout <<"\nReverse full array:\n";

    int i,n,a[10000];
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
//    printf("\nprinting all elements of array reversely\n");
    reverse(a,a+n);

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
