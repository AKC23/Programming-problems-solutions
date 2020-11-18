/*
Problem's name: 379A New Year Candles
Problem's link: https://codeforces.com/problemset/problem/379/A

Submission's link: https://codeforces.com/problemset/submission/379/98828237
Date: November 18, 2020

@Ahmadul Karim Chowdhury
*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<algorithm>
#include<list>
#include<queue>
using namespace std;

int main()
{
    int a,b,sum = 0,c;
    scanf("%d%d",&a,&b);
    sum = a;
    while(1){
        c=a/b;
//        cout<<"c: "<<c<<" ";
        a=c+(a%b);
//        cout<<"a: "<<a<<" ";
        sum+=c;
//        cout<<"sum: "<<sum<<" ";
        if(a<b)
        {
//            cout<<"Break ";
            break;
        }
    }
    printf("%d\n",sum);
    return 0;
}


