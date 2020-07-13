/**
791A Bear and Big Brother
Link : https://codeforces.com/problemset/problem/791/A
*/

#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int a,b,c,i,s1,s2;

    a = b = c = s1 = s2 = i = 0;
    cin>>a>>b;

/** input a & b, c = counting variable */

    for(i=0; ;i++)
    {
        a = a * 3;
        s1 = a;

        b = b * 2;
        s2 =  b;

//        cout<<s1<<" "<<s2<<endl;
        c++;
        if(s1>s2)
        {
            break;
        }
    }

    cout<<c;

    return 0;

}
