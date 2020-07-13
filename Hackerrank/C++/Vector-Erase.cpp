/**
Sample Input
6
1 4 6 2 8 9
2
2 4

Sample Output
3
1 8 9
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int i=0,j=0,n=5,x=0,x1=0,x2=0;
    cin>>n;
    vector <int> vec;
    vector <int> :: iterator it;

    for(i=0;i<n;i++)
    {
        cin>>j;
        vec.push_back(j);
    }

//    sort(vec.begin(),vec.end());
    cin>>x;
    x = x - 1;

    vec.erase(vec.begin()+x);

//    for(it=vec.begin();it!=vec.end();it++)
//    {
//        cout<<*it<<" ";
//    }
//    cout<<endl;
    cin>>x1;
    cin>>x2;
    x1 = x1-1;
    x2=x2-1;
    vec.erase(vec.begin()+x1,vec.begin()+x2);

    cout<<vec.size()<<endl;

    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
