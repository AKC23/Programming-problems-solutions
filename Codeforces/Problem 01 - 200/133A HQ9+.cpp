/**
133A HQ9+
Link : https://codeforces.com/problemset/problem/133/A

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    getline(cin,p);
    int c,i,j;
    c = i = j = 0;

    for(i=0; p[i] != '\0'; i++)
    {
        if(p[i] > 32 && p[i] < 127)
        {
            if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
            {
                c++;
                break;
            }
        }
    }

    if(c==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }

    return 0;
}
