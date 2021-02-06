/*
https://atcoder.jp/contests/abc190/tasks/abc190_a
A - Very Very Primitive Game 
*/
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if( c==0 && a>b )
        cout<<"Takahashi";
    else if(c==0 && a<=b)
        cout<<"Aoki";    
    else if(c==1 && a>=b)
        cout<<"Takahashi";
    else
        cout<<"Aoki";

    return 0;
}