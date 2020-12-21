/* 
Problem's name: 1411A In-game Chat
Problem's link: https://codeforces.com/contest/1465/problem/A
Submission's link: https://codeforces.com/contest/1465/submission/101885738
Date: Sunday, December 20,2020
*/

#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int i,n,t,count1,count2;
    i = n = t = count1 = count2 = 0;
    cin>>t;

    while(t)
    {
        cin>>n;
        getchar();
        string s;
        getline(cin,s);

        for(i=0;i<s.size();i++)
        {
            if(s[i] == ')')
            {
                count1++;
            }
            else
            {
                if(s[i-1] == ')' )                                  //if letter and ')' is found 
                {
                    count2 = count2 + count1;
                    count1 = 0;
                }
                count2++;
            }            
        }
        if(count1>count2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
        s.clear();
        count1 = count2 = 0;
        // cout<<"count1: "<<count1<<" "<<"count2: "<<count2<<"\n"; 
        t--;
    }

    return 0;
}