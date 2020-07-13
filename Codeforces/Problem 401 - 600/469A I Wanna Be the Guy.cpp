/**
469A I Wanna Be the Guy
Learnt : Check all the levels that are covered by two people
*/

#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,p1,p2,q1,c;
    i = n = p1 = q1 = c = 0;

    cin>>n;                         //total level = n
    cin>>p1;                        //p1 = input of first boy
    int arr[200];

    for(i=0;i<p1;i++)
    {
        cin>>arr[i];
    }

    cin>>q1;                        //q1 = input of second boy

    for(i=p1;i<p1+q1;i++)           //input of second boy started after the input of first boy
    {
        cin>>arr[i];
    }

    sort(arr,arr+(p1+q1));          //sorting ascending order

    for(i=0;i<p1+q1;i++)
    {
/** To check if all the levels are covered */
        if(arr[i] != arr[i+1] )
        {
            c++;
        }
    }

/**If all the levels are covered then c = n*/
    if(c==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }

    return 0;
}
