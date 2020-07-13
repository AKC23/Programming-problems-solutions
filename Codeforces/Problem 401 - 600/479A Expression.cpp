/**
479A Expression
https://codeforces.com/problemset/problem/479/A
1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9
1+2+3 = 6
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,m,m1,m2,m3,m4,m5,m12,m34;

    cin>>a>>b>>c;

    /** 1st process */
    m1 = a+(b*c);
    m2 = a*(b+c);
    m3 = a*b*c;
    m4 = (a+b)*c;
    m5 = a+b+c;

    m12 = max(m1,m2);           //max between m1 and m2
    m34 = max(m3,m4);           //max between m3 and m4

    m = max(m12,m34);           //max between m12 and m34
    m = max(m,m5);              //max between m and m5

    cout<<m;

    /** 2nd process */
    m = max(m1,max(m2,max(m3,max(m4,m5))));
    cout<<m;

    return 0;
}
