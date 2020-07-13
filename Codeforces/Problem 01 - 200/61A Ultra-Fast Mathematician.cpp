/**
61A Ultra-Fast Mathematician

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2,s3;
    int i;

    getline(cin,s1);
    getline(cin,s2);


    for(i=0;i<s1.size();i++)
    {
        if(s1[i] == s2[i])
        {
            s3[i] = 0;
//            cout<<"0";
        }
        else if(s1[i] != s2[i])
        {
            s3[i] = 1;
//            cout<<"1";
        }
    }

//    cout<<s1<<endl;
//    cout<<s2<<endl;
    cout<<s3;
//    cout<<"Hello";

    return 0;
}


/**
111
000

111

*/
