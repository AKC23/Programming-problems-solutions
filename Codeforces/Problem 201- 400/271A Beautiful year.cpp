/**
271A Beautiful year
https://codeforces.com/problemset/problem/271/A
learnt : comparing of digits of a year to find the distinct year
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,n1,s[10000];
    n = n1 = i = j = 0;
    cin>>n;
    n++;                    /** Finding the year after the input year */

    for(i=0; ;i++)
    {
        n1 = n;
        for(j=0; j<4 ; j++)
        {
            s[j] = n1% 10;
//            cout<<s[j]<<" ";
            n1 = n1/10;
        }

        /** Check if the element of array are same or not */

        if((s[0] == s[1]) || (s[0] == s[2]) || (s[0] == s[3]) || (s[1]==s[2]) || (s[1]==s[3]) || (s[2]==s[3]) )
        {
            n++;
        }
        else
        {
            cout<<n;
            break;
        }
    }

    return 0;
}
