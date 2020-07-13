/*/
https://codeforces.com/problemset/problem/1/A
1A Theatre Square
/*/
#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main()
{
    long long int n,m,a, stone, i,j;
    cin>>n>>m>>a;
    i = j = stone = 0;

    if(n%a==0)
    {
        i = n/a;
    }
    else
    {
        i = (n/a) + 1;
    }

    if(m%a==0)
    {
        j = m/a;
    }
    else
    {
        j = (m/a) + 1;
    }

    stone = i*j;

    printf("%lld",stone);


    return 0;
}
