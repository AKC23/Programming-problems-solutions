/*/
Diagonal Difference
https://www.hackerrank.com/challenges/diagonal-difference/problem

Function description

Complete the "diagonalDifference" function in the editor below.
It must return an integer representing the absolute diagonal difference.
diagonalDifference takes the following parameter:

arr: an array of integers.

Input Format

The first line contains a single integer, n,
the number of rows and columns in the matrix arr.
Each of the next n lines describes a row, arr[i],
and consists of n space-separated integers arr[i][j].

/*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n][n];

    int i,j;
    int sum1,sum2;
    sum1 = sum2 = 0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

/*/
    for(i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
/*/
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                sum1 = sum1 + arr[i][j];
            }
            if(i==n-j-1)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }

//    cout<<sum1<<endl;
//    cout<<sum2<<endl;

    cout<<abs(sum1 - sum2)<<endl;

}



