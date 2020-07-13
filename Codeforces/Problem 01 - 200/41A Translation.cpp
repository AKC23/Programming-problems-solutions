/**
41A Translation
Link : https://codeforces.com/problemset/problem/41/A
Learnt : How to reverse a word by string class

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,c;
    i = c = 0;
    string s1,t;

    getline(cin,s1);
    getline(cin,t);

    reverse(s1.begin(),s1.end());

//    cout<<s1<<endl;
//    cout<<t<<endl;
/** process 1 */

    if(s1==t)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

/** process 2 */

//    for(i=0; s1[i] != '\0'; i++)
//    {
//        if(s1[i]==t[i])
//        {
//            c = 0;
////            cout<<"1";
//        }
//        else
//        {
//            c++;
//            break;
////            cout<<"2";
//        }
//    }
//
//        if(c==0)
//        {
//            cout<<"YES";
//        }
//        else
//        {
//            cout<<"NO";
//        }
//


    return 0;
}
