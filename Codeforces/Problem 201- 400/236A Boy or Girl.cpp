/**
https://codeforces.com/problemset/problem/236/A
236A Boy or Girl
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i,j,n,c;
    i = j = c = 0;

    getline(cin,s);

    for(i=0;i<s.size();i++)
    {
        for(j=i+1;j<s.size();j++)
        {
            if(s[i] == s[j])
            {
                s[j] = '0';
            }
        }
    }

    for(i=0;i<s.size();i++)
    {
        if(s[i] != '0')
        {
            c++;
        }
    }

    cout<<c<<endl;
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }

    cout<<endl<<s<<endl;


    return 0;

}


