/**
B. An Odd Problem
https://atcoder.jp/contests/aising2020/tasks/aising2020_b
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,ar[100],i,c;
    i = N = c = 0;
    cin>>N;
//    ar[N];

    for(i=1;i<=N;i++)
    {
        cin>>ar[i];
        if( ((ar[i]) % 2 != 0 ) && (i % 2 != 0)  )
        {
            c++;
        }
    }

    cout<<c;
    return 0;
}
