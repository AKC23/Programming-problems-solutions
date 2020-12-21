/* 
Problem's name: 1462A Favorite Sequence
Problem's link: https://codeforces.com/contest/1462/problem/A
Submission's link: https://codeforces.com/contest/1462/submission/101840843
Date: Sunday, December 20,2020
*/

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int i,n,q,k,t;
    i = n = q = k = t = 0;
    
    cin>>t;
    while(t)
    {
        cin>>n;
        vector<int> vec(n);
    
        for(i=0;i<n;i++)
        {
            cin>>vec[i];
        }

        k = 0;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                cout<<vec[k]<<" ";                      //for the even elements
            }
            else
            {
                cout<<vec[n-1-k]<<" ";                  //for the odd elements
                k++;
            }    
        }
        cout<<"\n";
        vec.clear();
        t--;
    }

    return 0;
}



