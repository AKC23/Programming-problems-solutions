/*
Problem's name: Sets-STL
Problem's link: https://www.hackerrank.com/challenges/cpp-sets/problem
Submission's link: https://www.hackerrank.com/challenges/cpp-sets/submissions/code/190579326
Date: Decemmber 7, 2020
@Ahmadul Karim Chowdhury
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set <int> s;
    set <int> :: iterator it;

    long long int i,n1,n2,t;
    i = n1 = n2 = t = 0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n1>>n2;
        switch(n1)
        {
            case 1:
                s.insert(n2);
                break;
            case 2:
                s.erase( n2 );
                break;
            case 3:
                cout << (s.find( n2 ) == s.end() ? "No" : "Yes") << endl;
                break;
        }
    }
    return 0;
}
