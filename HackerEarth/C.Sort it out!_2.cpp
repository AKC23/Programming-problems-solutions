/* 
Problem's Name: C.Sort it out!
Problem's Link: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/sort-it-out/
Submission's Link: https://www.hackerearth.com/submission/51924121/
Date: 05.01.2021
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    long n, x, i;

    cin >> n;

    multimap<long long, long long> m;

    for (long i = 0; i < n; i++)
    {
        cin >> x;
        m.insert({x, i});
    }

    // for (i = 0; i < n; i++)
    // {
    //     cout<<" "<<i<<"\n";
    // }

        for(auto it:m){

        cout<<it.second<<" ";

    }
    return 0;
}