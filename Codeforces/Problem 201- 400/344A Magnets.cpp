/**
344A Magnets
https://codeforces.com/problemset/problem/344/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    s1 = '10';
    int n,i,j,c1,sum;
    //c1 = count
    n = i = j = c1 = sum = 0;
    cin>>n;
    getchar();
    for(i=1; i<=n; i++)
    {
        getline(cin,s);

        if(s1 != s)
        {
            c1++;
        }

        s1 = s;
    }

    sum = c1 ;
    cout<<sum;

    return 0;
}
