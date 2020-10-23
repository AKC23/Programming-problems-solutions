/**
Weird Walk
Problem Code: WWALK
https://www.codechef.com/LTIME84B/problems/WWALK

Lesson Learnt : use of while() only and use this for decreasing up to zero, and
if sum of both array are same and elements of every elements are same
then have to sum those elements
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a[100000],b[100000],n,i,T,c,suma,sumb;

    i = T = n = c = 0;
    cin>>T;

    while(T--)
    {
        cin>>n;
        a[n],b[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        suma = sumb = c = 0;

        for(i=0; i<n; i++)
        {
            suma = suma + a[i];
            sumb = sumb + b[i];
            if( (suma==sumb) && (a[i] == b[i]) )
            {
                c = c + a[i];
            }
        }
        cout<<c<<endl;
    }


    return 0;
}
