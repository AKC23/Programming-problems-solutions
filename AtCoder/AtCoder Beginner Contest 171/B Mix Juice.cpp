/**
B - Mix Juice
https://atcoder.jp/contests/abc171/tasks/abc171_b
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i,c,sum;
    n = i = c = sum = 0;
    cin>>n;
    cin>>c;
    long int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(i=0;i<c;i++)
    {
        sum = sum + a[i];
//        cout<<a[i];
    }

    cout<<sum;

    return 0;
}
