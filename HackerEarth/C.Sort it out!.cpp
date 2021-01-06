/* 
Problem's Name: C.Sort it out!
Problem's Link: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/sort-it-out/
Submission's Link: https://www.hackerearth.com/submission/51923953/
Date: 05.01.2021
*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector <int> v1,v2;

    long long int i,j,size,n;
    i = 0;
    vector <int> :: iterator it;
    ios_base::sync_with_stdio(0);

    cin.tie(0);
    cin>>size;
    for (i = 0; i < size; i++)
    {
        cin>>n;
        v1.push_back(n);
        v2.push_back( v1[i] );
    }

    sort(v1.begin(), v1.end());

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(v1[i] == v2[j])
            {
                printf("%lld ",j);
                break;
            }
        }
    }

    return 0;
}
