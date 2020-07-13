/*/
158A. Next Round
http://codeforces.com/problemset/problem/158/A
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round,
as long as the contestant earns a positive score..." — an excerpt from contest rules.

Learnt : k-th place and value k are not the same -_-
/*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int i,temp=0,a[100] = {10,9,8,7,8,7,6,5};

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i]>0 && a[i]>=a[k-1])
        {
            temp++;
        }
        else
        {
            break;
        }
    }
    cout<<temp<<endl;

    return 0;
}
