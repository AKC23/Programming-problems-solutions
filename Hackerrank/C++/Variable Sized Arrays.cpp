
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;


int main()
{
    int i,j,r,q,n_v;
    cin>>r>>q;

    int *ar[r];

    for(i=0;i<r;i++)
    {
        cin>>n_v;

//        ar[i] = n_v;
        ar[i] = new int [n_v];

        for(j=0;j<n_v;j++)
        {
            cin>>ar[i][j];
        }
    }

    for(i=0;i<q;i++)
    {
        int val1,val2;
        cin>>val1>>val2;

        cout<<ar[val1][val2]<<endl;

    }

    return 0;
}
