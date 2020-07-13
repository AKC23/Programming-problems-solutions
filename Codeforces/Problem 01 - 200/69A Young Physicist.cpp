/**
69A Young Physicist
Link : https://codeforces.com/problemset/problem/69/A
Lesson learnt : summation of column of (n*3) matrices(r,c)


*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100][3],sum[1][3];
    int i,j,sum1,sum2,sum3;
    sum1 = sum2 = sum3 = 0;

    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==0)
            {
                sum1 = sum1 + a[i][j];
                sum[0][0] = sum1;
            }
            else if(j==1)
            {
                sum2 = sum2 + a[i][j];
                sum[0][1] = sum2;
            }
            else if(j==2)
            {
                sum3 = sum3 + a[i][j];
                sum[0][2] = sum3;
            }
        }
    }


    if(sum[0][0] == 0 && sum [0][1] == 0 && sum [0][2] == 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }



    return 0;
}

















