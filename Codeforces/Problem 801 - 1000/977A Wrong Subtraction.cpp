/**
977A Wrong Subtraction
Lesson Learnt : Finding the last digits of non - zero and zero numbers
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,i;
    n = k = i = 0;
    cin>>n;
    cin>>k;

    for(i=1;i<=k;i++)
    {
        if(n%10 != 0)
        {
            n = n - 1;
//            cout<<"Non zero : "<<i<<endl;
        }
        else
        {
            n = n / 10;
//            cout<<"Zero : "<<i<<endl;
        }
    }

    cout<<n<<endl;

    return 0;
}
