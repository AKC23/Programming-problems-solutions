/**
C. XYZ Triples
https://atcoder.jp/contests/aising2020/tasks/aising2020_c
*/



#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    long int i,x,y,z,c,N;
    i = x = y = z = c = N = 0;

    cin>>N;

    for(i=1;i<=N;i++)
    {
        c = 0;
        for(x=1;x<=i;x++)
        {
            for(y=1;y<=i;y++)
            {
                for(z=1;z<=i;z++)
                {
                    if( (pow(x,2) + pow(y,2) + pow(z,2) + x*y + y*z + z*x ) == i)
                    {
                        c++;
                    }
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
