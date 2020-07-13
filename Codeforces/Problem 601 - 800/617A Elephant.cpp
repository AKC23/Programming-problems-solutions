/**
617A Elephant
Link : https://codeforces.com/problemset/problem/617/A
Lesson Learnt : True/False in if statement
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    n = 0;
    cin>>n;

    if(n%5==0)
    {
        cout<<n/5<<endl;
    }
    else
    {
        cout<<(n/5) + 1<<endl;
    }

    return 0;
}
