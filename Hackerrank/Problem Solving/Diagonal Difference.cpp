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
using namespace std;

int sum,sum1,sum2;
int diagonalDifference(int arr[], int n);


int main()
{
    int n = 3;
    //cin>>n;
    int i,j,*dif;
    sum = sum1 = sum2 = 0;

    int arr[3][3] = {1,2,3,4,5,6,9,8,9};
/*/
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
/*/
    //cout<<sum1<<endl;
    //cout<<sum2<<endl;

    dif = diagonalDifference(arr,n);
    cout<<dif;

}

int diagonalDifference(int arr[], int n)
{
    int dif;
    int i,j,n;
    i=j=n;

    for(i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                sum1 = sum1 + arr[i][j];
            }
            if(i+j == 2)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }


    if(sum1>sum2)
    {
        dif = sum1 - sum2;
    }

    else
    {
        dif = sum2 - sum1;
    }
    return dif;
}

