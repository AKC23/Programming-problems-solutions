/**
A alphabet.cpp

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s;

    cin>>s;
//    getline(cin,s);

    if(s>=64 && s<=90 )
    {
        cout<<"A";
    }
    else if(s>=97 && s<=122 )
    {
        cout<<"a";
    }


    return 0;
}
