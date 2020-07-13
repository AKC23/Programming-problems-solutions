/**
282A Bit++
Link : https://codeforces.com/problemset/problem/282/A
Lesson Learnt : Compare between strings, use of getchar() before an string input
*/

#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,c=0;
    string s,t1,t2,t3,t4;
    t1 = "++X",t2 = "X++",t3 = "--X", t4 = "X--";

    int i;
    cin>>n;
    getchar();

    for(i=0;i<n;i++)
    {
        getline(cin,s);

        if(s==t1 || s==t2)
        {
            c++;
        }
        else if( (s == t3) || (s == t4) )
        {
            c--;
        }

    }

    cout<<c;

    return 0;

}
