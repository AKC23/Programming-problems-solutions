/*/
Day 9: Recursion 3
https://www.hackerrank.com/challenges/30-conditional-statements/problem

/*/
#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int factorial(int b)
{

    if(b==1)
    {
        return 1;
    }
    else
    {
        return b * factorial(b-1);
    }

}

int main()
{
    int a;

    cin>>a;
    int result = factorial(a);

    cout<<result;

}

