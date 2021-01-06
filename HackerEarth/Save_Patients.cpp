/* 
Problem's Name: Save Patients
Problem's Link: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/description/
Submission's Link: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/submissions/
Date: 06.01.2021
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
    i = j = size = n = 0;
    bool b = true;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>size;
    for (i = 0; i < size; i++)
    {
        cin>>n;
        v1.push_back(n);
    }
    for (i = 0; i < size; i++)
    {
        cin>>n;
        v2.push_back(n);
    }


    for(i=0;i<size;i++)
    {
        if(v1[i] < v2[i])
        {
            b = false;
            break;
        }
    }
    if(!b)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    

    return 0;
}
