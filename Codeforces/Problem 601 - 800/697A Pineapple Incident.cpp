/**
697A Pineapple Incident

Problem's link : https://codeforces.com/contest/697/problem/A
Submission's link : https://codeforces.com/contest/697/submission/86765156

Date : Monday, July 13, 2020
@AKC
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,x,s;
    t = x = s = 0;

    cin>>t>>s>>x;

    if(x == t)
    {
        cout<<"YES";
    }
    else if(x>t+1)
    {
        if( ((x-t) % s == 0 || (x-t-1) % s == 0 ) )
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }


    return 0;
}


/** 2nd process

Problem : Time limit exceeded


#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,t,x,s,c1,c2,c3;
    i = t = x = s = c1 = c2 = c3 = 0;

    cin>>t>>s>>x;
    c1 = t + s;

    for(i=0;i<=x;i++)
    {
        c1 = c1 + s;
        c2 = c1 + 1;
        if(t == x || c1 == x || c2 == x)
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            c3 = 1;
        }
    }

    if(c3 == 1)
    {
        cout<<"NO";
    }

    return 0;
}

*/
