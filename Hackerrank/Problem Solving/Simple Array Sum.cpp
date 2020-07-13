
#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int i,sum=0;

    for(i=0; i<n; i++)
    {
        cin>>ar[i];
        sum = sum + ar[i];
    }

    cout<<sum;
}
