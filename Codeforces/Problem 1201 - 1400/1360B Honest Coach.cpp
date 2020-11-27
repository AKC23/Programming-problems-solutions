/*
Problem's name: 1360B Honest Coach
Problem's link: https://codeforces.com/contest/1360/problem/B
Submission's link: https://codeforces.com/contest/1360/submission/99713949
Date: Friday, November 27,2020
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k,s,t,min;
    i = j = k = s = t = min = 0;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>s;
        int ar[s];                                  //array of s size
        for(j=0;j<s;j++)
        {
            cin>>ar[j];
        }
        sort(ar,ar+s);                              //sorting number

        min = ar[s-1] - ar[0];                      //min = max number - min number
        
        for(k=0;k<s;k++)
        {
            for(j=k+1;j<s;j++)
            {
                if( min > (ar[j] - ar[k] ) )
                {
                    min = ar[j] - ar[k];            //finding min value
                }
            }
        }
        cout<<min<<endl;
        min = 0;
    }

    return 0;
}