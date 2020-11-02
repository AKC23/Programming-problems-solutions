#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,sum,c;

    n = i = sum = c = 0;
    cin>>n;

    if(n<0)
    {
        n = n * (-1);
        c = -1;
    }

    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }

    if(c == -1)
    {
        sum = sum - 1;
        sum = sum * -1;
        cout<<sum;
    }
    else if(n==0)
    {
        sum = 1;
        cout<<sum;
    }
    else
    {
        cout<<sum;
    }

    return 0;
}
