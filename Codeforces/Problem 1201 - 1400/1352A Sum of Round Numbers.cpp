/**
Problem's Name: 1352A Sum of Round Numbers
Problem's link: https://codeforces.com/problemset/submission/1352/101157508
Submission's link: https://codeforces.com/problemset/problem/1352/A
Date: Monday, December 14, 2020  
*/

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    long long int i, n, t, rem, ans, count;
    i = n = t = rem = ans = count = 0;
    cin >> t;
    vector<int> vec;

    while (t)
    {
        cin >> n;

        if (n % 10 != 0)
        {
            rem = n % 10;
            vec.push_back(rem);
            n = n - rem;
        }
        if (n % 100 != 0)
        {
            rem = n % 100;
            vec.push_back(rem);
            n = n - rem;
        }
        if (n % 1000 != 0)
        {
            rem = n % 1000;
            vec.push_back(rem);
            n = n - rem;
        }
        if (n % 10000 != 0)
        {
            rem = n % 10000;
            vec.push_back(rem);
            n = n - rem;
        }
        if (n >= 10000 != 0 && n % 10000 == 0)
        {
            vec.push_back(n);
        }
        printf("%d\n", vec.size());

        for (i = 0; i < vec.size(); i++)
        {
            printf("%d", vec[i]);
            printf(" ");
        }
        // printf("\n");
        t--;
        vec.clear();
    }
    return 0;
}
