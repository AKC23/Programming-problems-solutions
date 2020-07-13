/**
266A Stones on the Table
Lesson learnt : Take strings input in a different way

    for(i=0; i<n; i++)
    {
        getline(cin,s[i]);                //wrong way
        cin>>s[i];
    }

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int i,c,n;
    i = c = n = 0;

    cin>>n;
    getchar();
    string s;
    getline(cin,s);

    for(i=0; i<n; i++)
    {
        if(s[i] == s[i+1])
        {
            c++;
        }
    }

    cout<<c;

    return 0;
}



