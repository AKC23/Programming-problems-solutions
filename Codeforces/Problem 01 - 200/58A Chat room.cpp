/**
58A Chat room
Link : https://codeforces.com/problemset/problem/58/A
Lesson Learnt : Check the letters of the word "hello" continuously
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    t = "hello";

    getline(cin,s);
    int i,c=0;

    for(i=0;i<s.size();i++)
    {
        if( s[i] == t[c] )
        {
            c++;
        }
    }

    if(c == 5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}

