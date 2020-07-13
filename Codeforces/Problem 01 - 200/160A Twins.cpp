/**
160A Twins
https://codeforces.com/problemset/problem/160/A
*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c,sum1,sum2;
    n = i = c = sum1 = sum2 = 0;
    c = 1;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum1 = sum1 + a[i];
    }

    sum1 = sum1/2;
//    cout<<sum1;

    sort(a,a+n);                //sorting : ascending order

//    finding in descending order
    for(i=n-1;i>=0;i--)
    {
//        cout<<a[i];
        sum2 = sum2 + a[i];
        if(sum2>sum1)
        {
            break;
        }
        c++;
    }

    cout<<c;

    return 0;
}
