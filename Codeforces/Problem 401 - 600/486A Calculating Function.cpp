/**
486A Calculating Function
https://codeforces.com/problemset/problem/486/A
*/

#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    long long int n,i;
    n = i = 0;
    i = 1;
    cin>>n;

    if(n%2==0)
    {
        n = n/2;
        cout<<n;
    }
    else
    {
        i = i * (-1);
        n = (n/2 + 1) * i;
        cout<<n;
    }

    return 0;
}


/** 2nd process */
//    long long int n,i,j,sum,c;
//    n = i = j = sum = c = 0;
//    scanf("%lld",&n);
//    cin>>n;
//    j = 1;
////    n = 5;
//
//    for(i=1; i<=n; i++)
//    {
//        j = j * (-1);
//        sum = sum + j;
//        cout<<sum<<endl;
//        j++;
//
//    }
//
//    printf("%lld",sum);

//    cout<<sum;
//    if(sum%2 == 0)
//    {
//        cout<<sum;
//    }
//    else
//    {
//        cout<<sum * (-1);
//    }

