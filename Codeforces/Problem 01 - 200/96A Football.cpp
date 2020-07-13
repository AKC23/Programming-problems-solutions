/**
https://codeforces.com/problemset/problem/96/A
96A Football
*/

#include<bits/stdc++.h>
using namespace std;

int i=0,c1=0,c2=0,z=0;


int main()
{
    string s;
    getline(cin,s);

    for(i=0; i<s.size(); i++)
    {
        if(s[i]== '0')
        {
            c1++;
            c2 = 0;
            if(c1>6)
            {
                z = 1;
                break;
            }
        }
        else if(s[i]== '1')
        {
            c1 = 0;
            c2++;
            if(c2>6)
            {
                z = 1;
                break;
            }
        }
    }

    if(z==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


    return 0;
}











