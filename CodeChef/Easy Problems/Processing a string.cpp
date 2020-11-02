/**
Problem Name: Processing a string
Problem Code: KOL15A
Problem's Link: https://www.codechef.com/LTIME84B/problems/WWALK
Submission's Link: https://www.codechef.com/viewsolution/39271213
Date: Monday, November 02,2020

Lesson Learnt:
1. convert a string to pointer
atoi(): The atoi() function takes a character array or string literal as an argument and returns its value.
2. convert the number to int value

@Ahmadul Karim Chowdhury
*/


#include <bits/stdc++.h>
#include <cstring>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string s1,s2;
    const char *str;

    int num,T,i,j,sum;
    num = T = i = j = sum = 0;

    cin>>T;
    getchar();
    for(i=0;i<T;i++)
    {
        s1 = s2 = '\0';
        sum = 0;
        getline(cin,s1);

        for(j=0;j<s1.size();j++)
        {
            if(s1[j]>= '0'  && s1[j] <= '9')
            {
                s2 = s1[j];                             //if it is digit then send it to s2
                str = &s2[0];                           //string to pointer
                num = atoi(str);                        //pointer to number
                sum = sum + num;
            }
        }
        cout<<sum<<endl;                                //sum of number
    }
        return 0;

}


