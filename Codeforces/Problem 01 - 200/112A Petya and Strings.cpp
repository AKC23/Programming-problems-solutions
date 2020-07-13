/**
112A Petya and Strings
Link : https://codeforces.com/problemset/problem/112/A
*/

#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char A[100],B[100];
    int result;

    gets(A);
    gets(B);

    result = strcmp(strupr(A),strupr(B));

    cout<<result<<endl;

    return 0;
}
