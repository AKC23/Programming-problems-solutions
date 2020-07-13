/**
318A Even Odds
Link : https://codeforces.com/problemset/problem/318/A
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
/** 1st Process */
    long long int n,k,c;
    cin>>n>>k;

    if(n%2==0)
    {
        c = n / 2;
    }
    else
    {
        c = (n+1)/2;
    }

    if(k<=c)
    {
        cout<<(k*2)-1;
    }
    else
    {
         cout<<(k-c)*2;
    }



    return 0;
}

/** 2nd Process */
/** Time exceeded */
//    long long int n,k,i,j,c1,c2;
//    n = k = i = j = 0;
//    c1 = 1;
//    c2 = 2;
//    cin>>n>>k;
//    int a[n];
//    if(n%2 != 0)
//    {
//        for(i=0; i<=n/2; i++)
//        {
//            a[i] = c1;
//            c1 = c1 + 2;
//        }
//
//        for(; i<n; i++)
//        {
//            a[i] = c2;
//            c2 = c2 + 2;
//        }
//
//        k = k - 1;
//
////        for(i=0; i<n; i++)
////        {
////            cout<<a[i];
////        }
////        cout<<endl;
//
//        for(i=0; i<n; i++)
//        {
//            if(i == k)
//            {
//                cout<<a[i];
//            }
//        }
//    }
//    else
//    {
//        for(i=0; i<n/2; i++)
//        {
//            a[i] = c1;
//            c1 = c1 + 2;
//        }
//
//        for(; i<n; i++)
//        {
//            a[i] = c2;
//            c2 = c2 + 2;
//        }
//
//        k = k - 1;
//
////        for(i=0; i<n; i++)
////        {
////            cout<<a[i];
////        }
////        cout<<endl;
//
//        for(i=0; i<n; i++)
//        {
//            if(i == k)
//            {
//                cout<<a[i];
//            }
//        }
//    }
