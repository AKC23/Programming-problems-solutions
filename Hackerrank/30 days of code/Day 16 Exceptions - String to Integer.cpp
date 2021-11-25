/**
Hackerrank
30 Days of Code
Day 16: Exceptions - String to Integer

Link : https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem
Date : Thursday, July 16, 2020

@Ahmadul Karim Chowdhury
*/


#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;

    try
    {
        int no;
        no = stoi(S);
        cout<<no<<endl;
    }
    catch(exception a)
    {
        cout<<"Bad String";             //if there is any error then this line will print
    }

    return 0;
}

