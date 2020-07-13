#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l = 0;
    char s[100];

    gets(s);
    l = strlen(s);

    if(s[l-2] == 'A')
    {
        if(s[0] == '1' && s[1] >= '2')
        {
            if(s[0] == '1' && s[1] <= '1')
            {
                s[0] = '2';
                s[1] = s[1] + 2;
            }
            else if(s[1] == '2')
            {
                s[0] = '0';
                s[1] = '0';
            }
        }
    }
    else if(s[l-2] == 'P')
    {
        if(s[0] == '0' && s[1] < '8')
        {
            s[0]++;
            s[1] = s[1]+2;
        }
        else if(s[0] == '0' && s[1] <= '9')
        {
            s[0] = '2';
            if(s[1] == '8')
            {
                s[1] = '0';
            }
            else if(s[1] == '9')
            {
                s[1] = '1';
            }
        }
        else if(s[0] == '1' && s[1] <= '2')
        {
            if(s[0] == '1' && s[1] <= '1')
            {
                s[0] = '2';
                s[1] = s[1] + 2;
            }
//            else if(s[1] == '2')
//            {
//                s[0] = '0';
//                s[1] = '0';
//            }
        }

    }
        s[l-2] = '\0';
        s[l-1] = '\0';

    puts(s);

    return 0;
}


