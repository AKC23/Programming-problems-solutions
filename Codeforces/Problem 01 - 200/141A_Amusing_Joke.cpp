/*
Problem's name: 141A Amusing Joke
Problem's link: https://codeforces.com/contest/141/problem/A
Submission's Link:
https://codeforces.com/contest/141/submission/87550006    (Jul 21,2020)
https://codeforces.com/contest/141/submission/105627022   (Jan 28,2021)
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    bool b = true;

    s1 = (s1 + s2);
    sort(s1.begin(), s1.end());
    sort(s3.begin(), s3.end());

    if (s1.size() == s3.size())
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == s3[i])
            {
                b = true;
            }
            else
            {
                b = false;
                cout << "NO";
                return 0;
            }
        }
    }
    else
    {
        cout << "NO";
        return 0;
    }

    if (b)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}