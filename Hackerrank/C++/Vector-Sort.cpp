#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>     //used to sort elements
#include<queue>
#include<list>

using namespace std;

bool myFunc(int a,int b)
{
    return (a>b);
}


int main()
{
    int i=0,j=0,n=5,ar[n];
    cin>>n;
    vector <int> vec;
    vector <int> :: iterator it;

    for(i=0;i<n;i++)
    {
        cin>>j;
        vec.push_back(j);
    }

    sort(vec.begin(),vec.end());

    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
