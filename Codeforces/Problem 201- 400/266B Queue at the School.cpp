/**
Incomplete!!!
266B Queue at the School
Link : https://codeforces.com/problemset/problem/158/B
Learnt : Compare between two letters

Input:
5 1
BGGBG
Output : GBGGB

Input:
5 2
BGGBG
Output : GGBGB

Input:
4 1
GGGB
Output : GGGB

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t,i,j;

    i = j = t = n = 0;
    cin>>n;
    cin>>t;

    string s;
    getchar();
    getline(cin,s);

    for(i=0; i<t; i++)
    {
        for(j=0; j<s.size()-1; j++)
        {
            if(s[j]== 'B' && s[j+1] == 'G')
            {
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
                /** if the condition is true then j+1 should not be checked,
                j+2 should be checked */
            }
        }
    }

    cout<<s;

    return 0;
}
