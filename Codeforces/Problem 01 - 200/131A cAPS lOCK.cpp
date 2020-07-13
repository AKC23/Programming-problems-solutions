/**
131A cAPS lOCK
https://codeforces.com/problemset/problem/131/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,c,d;
    i = c = d = 0;

    getline(cin,s);

    /** all letters except for the first one are uppercase */
    for(i=1;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            c++;
        }
    }
    /** if it only contains uppercase letters */
    for(i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            d++;
        }
    }
    /** first letter is uppercase and others are lowercase */
    if(islower(s[0]) && c==0 )
    {
        s[0] = toupper(s[0]);
        for(i=1;i<s.size();i++)
        {
            s[i] = tolower(s[i]);
        }
        cout<<s;
        return 0;
    }
    /** if all the letters are uppercase then turn them to lowercase */
    if(d==s.size())
    {
        for(i=0;i<s.size();i++)
        {
            s[i] = tolower(s[i]);
        }
        cout<<s;
    }
    /** If the rule cannot be applied, the program should leave the word unchanged */
    else
    {
        cout<<s;
    }

//    cout<<s;
//    return 0;
}

S
