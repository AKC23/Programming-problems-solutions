/**
B - Multiplication 2
Link : https://atcoder.jp/contests/abc169/tasks/abc169_b

*/

#include <bits/stdc++.h>
#define int long long
#define inf 1000000000000000000             /** inf = 10^18 */

using namespace std;

signed main()
{
    int n,sum;
    n = sum = 1;
    cin>>n;
    int a[n];

    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for (int i=0; i<n; i++)
    {
        if (a[i]==0)
        {
            cout<<0;
            return 0;
        }
    }
    for (int i=0; i<n; i++)
    {
        if (sum>inf/a[i])
        {
            cout<<-1<<endl;
            cout<<sum<<endl;
            cout<<inf/a[i]<<endl;
            return 0;
        }
        else
        {
            sum = sum * a[i];
        }
    }
    cout<<sum<<endl;

    return 0;
}

