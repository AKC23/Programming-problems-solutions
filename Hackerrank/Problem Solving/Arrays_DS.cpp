/**

Problem's name: Arrays - DS
Problem's link: https://www.hackerrank.com/challenges/arrays-ds/problem
Submission's link: https://www.hackerrank.com/challenges/arrays-ds/submissions/code/213757020

Date : Monday, May 17, 2021
*/


#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>                 //used to sort elements
using namespace std;

bool myfunc(int a, int b)
{
    return (a>b);
}

int main()
{
    vector <int> vec;
    vector <int> :: iterator it;
    int i,size;
    cin>>size;

    while(size)
    {
        cin>>i;
        vec.push_back(i);
        size--;
    }
    reverse(vec.begin(), vec.end());
    // sort(vec.begin(), vec.end(),myfunc);

    for(it = vec.begin();it != vec.end();it++)
    {
        cout<< *it <<" ";
    }

    return 0;
}



