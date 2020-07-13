
/*/
Day 5: Loops
https://www.hackerrank.com/challenges/30-loops/problem
/*/


#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;
    int i,result;

    if(n>=2 && n<=20)
    {
        for(i=1; i<=10; i++)
        {
            result = n * i;
            cout<<n<<" x "<<i<<" = "<<result<<endl;
        }
    }

}
