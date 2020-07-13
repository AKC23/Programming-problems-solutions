/**

405A Gravity Flip
Link : https://codeforces.com/problemset/problem/405/A
Lesson Learnt : Sorting of ascending order

Date : 05/07/2020, 6:05 pm
@Ahmadul Karim Chowdhury

*/

#include<bits/stdc++.h>         //Header file for sorting array
#include<iostream>
using namespace std;


int main()
{
    long int n,i;
    int ar[200];
    n = i = 0;
    cin>>n;
    ar[n];

    for(i=0;i<n;i++)
    {
        cin>>ar[i];             //Input in array
    }

    sort(ar,ar+n);              //Sorting of ascending order

    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

    return 0;
}
