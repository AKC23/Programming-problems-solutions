/**
263A Beautful Matrix
https://codeforces.com/problemset/problem/263/A

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5],c1,c2;
    c1 = c2 = 0;

    for(int i=0; i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 1)
            {
                c1 = i;
                c2 = j;
            }
        }
    }

//    cout<<"Output \n";
//    for(int i=0; i<5;i++)
//    {
//        for(int j=0;j<5;j++)
//        {
//            cout<<a[i][j];
//        }
//        cout<<"\n";
//    }

    int r1 = abs(c1-2);
    int r2 = abs(c2-2);
    int r3 = r1 + r2;

    cout<<r3;
    return 0;
}
