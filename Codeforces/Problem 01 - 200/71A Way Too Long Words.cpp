/*/
A. Way Too Long Words

/*/

#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
#include <stdlib.h>

using namespace std;

int main()
{

    int n;
    char s[100];
    int i,j;

    cin>>n;

    for(i=0; i<n+1; i++)
    {
        gets(s);

        if(strlen(s)>10)
        {
            cout<<s[0]<<strlen(s)-2<<s[strlen(s)-1]<<endl;
        }
        else
        {
            puts(s);
        }

    }
    return 0;
}

