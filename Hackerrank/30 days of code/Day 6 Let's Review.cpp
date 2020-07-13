/**
Day 6 Lat's review
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{

    int t=0,i,j,len=0;
    string s;
    cin>>t;
    getchar();

    for(i=0;i<t;i++)
    {

        getline(cin,s);
        len = s.length();

        for(j=0;j<len;j++)
        {
            if(j==0 || j%2==0)
            {
                cout<<s[j];
            }
        }
        cout<<" ";

        for(j=0;j<len;j++)
        {
            if(j%2!=0)
            {
                cout<<s[j];
            }
        }
        cout<<endl;

    }

    return 0;
}
