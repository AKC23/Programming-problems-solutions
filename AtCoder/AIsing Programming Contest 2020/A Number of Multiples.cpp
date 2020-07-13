/**
A. Number of Multiples
https://atcoder.jp/contests/aising2020/tasks/aising2020_a
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int L,R,d,c;
    L = R = d = c = 0;

    cin>>L>>R>>d;

    for( ;L<=R;L++)
    {
        if(L%d == 0)
        {
            c++;
        }
    }

    cout<<c;
    return 0;
}
