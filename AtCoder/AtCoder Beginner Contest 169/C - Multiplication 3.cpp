/**
C - Multiplication 3
https://atcoder.jp/contests/abc169/tasks/abc169_c
*/

#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main (void)
{
    long long int A;
    double B;

    scanf("%lld",&A);
    scanf("%lf",&B);

    B = (100*B + 0.1);
//    cout<<B<<endl;
    printf("%lld", (A* (long long int)B )/100);

//    cout<<A*B<<endl;
//    printf("%lld", (A*(long long int)(100*B+0.5))/100);

    return 0;
}
