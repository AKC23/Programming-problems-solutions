/**
59A Word
Link : https://codeforces.com/problemset/problem/59/A
Lesson Learnt :
From lowercase to uppercase : transform(s.begin(), s.end(), s.begin(), ::toupper);
From uppercase to lowercase : transform(s.begin(), s.end(), s.begin(), ::tolower);
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,c1,c2;
    i = c1 = c2 = 0;
    string s;
    getline(cin,s);

    for(i=0;s[i] != '\0';i++)
    {
        if(s[i]>= 65 && s[i]<=90)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

//    cout<<"c1 : "<<c1<<endl;
//    cout<<"c2 : "<<c2<<endl;

    if(c1>c2)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout<<s;
    return 0;
}
