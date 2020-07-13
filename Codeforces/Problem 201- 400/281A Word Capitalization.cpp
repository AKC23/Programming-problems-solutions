/**
https://codeforces.com/problemset/problem/281/A
281 A Word Capitalization
*/

#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    char c[10];
    getline(cin,s);

    if(s[0]>=92)
    {
        s[0] = s[0] - 32;
    }

    cout<<s;

    return 0;

}
