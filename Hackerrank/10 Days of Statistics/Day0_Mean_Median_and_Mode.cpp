/**

Problem's name: Day 0: Mean, Median, and Mode
Problem's link: https://www.hackerrank.com/challenges/s10-basic-statistics/problem
Submission's link: https://www.hackerrank.com/challenges/s10-basic-statistics/submissions/code/213807751

Date : Monday, May 17, 2021
*/


#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,j,med;
    double mode,max_count,count,sum,min;
    med = mode = max_count = count = sum = 0;

    cin>>n;
    double a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }

    // cout<<"Mean: "<<sum/n<<"\n";
    printf("%.1lf\n",sum/n);
    // printf("Mean: %.1lf\n",sum/n);
    sum = 0;

    sort(a,a+n);
    
    if(n%2==0)
    {
        // cout<<"Medians are ";
        med = ((n/2)-1);
        // cout<<med;
        sum = sum + a[med];
        med = med + 1;
        sum = sum + a[med];
        // cout<<" and  "<<med<<"\n";
        printf("%.1lf\n",sum/2);
        // printf("Median: %.1lf\n",sum/2);
        // cout<<"\nMedian: "<<(float)sum/2;
    }
    else
    {
        // printf("Elements of array is odd\n");
        med = (n/2);
        // cout<<"Median is "<<med<<"\n";
        // cout<<"Element: "<<a[med];
        printf("%.1lf\n",a[med]);
        // cout<<a[med];
        // printf("Element %d",a[n/2]);
    }

    mode = max_count = 0;
    min = mode = a[0];

    for(i=0; i<n; i++)
    {
        count = 0;
        for(j=0; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            if(count>max_count)
            {
                max_count = count;
                mode = a[i];
                break;
            }
        }
    }

/* 
    if(max_count == 1)
    {
        cout<<"There is no mode here";
        return 0;
    }

*/
    if(max_count>1)
    {
        printf("%.0f\n",mode);

        // cout<<"Mode :"<<mode<<"\n";
        // cout<<"The elements came "<<max_count<<" times in array\n";
    }
    else
    {        
        mode = a[0];
        printf("%.0f\n",mode);
        // cout<<"Mode: "<<mode;
    }

    return 0;
}
