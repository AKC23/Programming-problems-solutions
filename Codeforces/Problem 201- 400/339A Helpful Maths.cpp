/**
339A. Helpful Maths
https://codeforces.com/problemset/problem/339/A
*/


// C++ program to sort a string of characters
#include<bits/stdc++.h>
using namespace std;

// function to print string in sorted order

int i =0;

void sortString(string &str)
{
    sort(str.begin(), str.end());

    for(i=(str.size()/2);i<str.size();i++)
    {
        cout<<str[i];

        if(i<str.size()-1)
        {
            cout<<"+";
        }
    }
}

int main()
{
    string s;

    getline(cin,s);

    sortString(s);

    return 0;
}


