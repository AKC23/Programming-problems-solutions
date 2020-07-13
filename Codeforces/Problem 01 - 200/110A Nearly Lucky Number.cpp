/**
110A Nearly Lucky Number
Link : https://codeforces.com/problemset/problem/110/A

Input : 1000000000000000000
Output : NO
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,c;
    i = c = 0;

    getline(cin,s);

    for(i=0;s[i] != '\0';i++)
    {
        if(s[i]== '4' || s[i] == '7')
        {
            c++;
        }
    }

    if(c==4 || c==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}


