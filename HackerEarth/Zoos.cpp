/**
Zoos
Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
*/


#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin,s);
    int i,c,o,z;

    i = c = o = z = 0;

    for(i=0;i<s.size();i++)
    {
        if(s[i] == 'z')
        {
            z++;
        }
        else if(s[i] == 'o')
        {
            o++;
        }
    }

    if((z * 2) == o)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }


    return 0;
}
