/**
Medel
https://www.codechef.com/problems/MDL
Problem Code: MDL
Learnt : ascending order and find them in the array in exact order
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int i,j,c,k,T,N,x1,x2,z,a[200],b[200];
/** x1 = smallest, x2 = largest, c = z = counting variable, T = test case  */
    cin>>T;

    i = j = c = k = N = x1 = x2 = z = 0;


    while(c != T)
    {
        cin>>N;
        for(i=0; i<N; i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }

        for(i=0; i<N; i++)
        {
            for(j=0; j<N-1; j++)
            {
                if(a[j]>=a[j+1])
                {
                    k = a[j+1];
                    a[j+1]=a[j];
                    a[j]=k;
                }
            }
        }

        c++;
        x1 = a[0];                          //smallest element
        x2 = a[N-1];                        //largest element

        for(i=0; i<N; i++)
        {
           if(b[i] == x1 || b[i] == x2)
           {
               cout<<b[i]<<" ";
               z++;
           }
           if(z == 2)
           {
               break;
           }
        }
        z = 0;
        cout<<endl;
    }

    return 0;
}

