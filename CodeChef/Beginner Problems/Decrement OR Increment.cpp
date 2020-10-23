/*
Problem's name: Decrement OR Increment
Problem's link: https://www.codechef.com/problems/DECINC

Submission's link: https://codeforces.com/contest/460/submission/96427285
Date: Friday, October 23,2020

@Ahmadul Karim Chowdhury
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int N;

    cin>>N;

    if(N % 4 == 0)
    {
        N = N + 1;
    }
    else
    {
        N = N - 1;
    }

    cout<<N;

    return 0;
}
