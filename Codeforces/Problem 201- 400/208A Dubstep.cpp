/**
208A Dubstep
Link : https://codeforces.com/problemset/problem/208/A
Learnt : Separate the words with a space.

Date : July 6,2020
*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main()
{
    string s;
    getline(cin,s);
    int i,j,c;
    i = j = c = 0;
    //c = counting variable

    for(i=0; i<s.size(); i++)
    {
        if ((s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'))
        {
            i = i + 2;
            c++;
        }
        else
        {
            cout<<s[i];
        }

        if(c==1)
        {
            cout<<" ";
            c = 0;
        }
    }



    return 0;
}
