/**
734A Anton and Danik.cpp
https://codeforces.com/problemset/problem/734/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,c1,c2,n;
    i = c1 = c2 = 0;
    cin>>n;
    getchar();
    getline(cin,s);

    for(i=0;i<n;i++)
    {
        if(s[i]== 'A')
        {
            c1++;
        }
        else if(s[i] == 'D')
        {
            c2++;
        }
    }


    if(c1>c2)
    {
        cout<<"Anton";
    }
    else if(c2>c1)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }


    return 0;
}
