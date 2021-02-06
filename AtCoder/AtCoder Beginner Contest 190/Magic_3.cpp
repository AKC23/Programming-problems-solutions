/*
https://atcoder.jp/contests/abc190/tasks/abc190_b
B - Magic 3
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int N, S, D;
    cin >> N >> S >> D;
    int X, Y;
    bool b = false;

    while (N)
    {
        cin >> X;
        cin >> Y;
        if (X < S && Y > D)
        {
            b = true;
        }
        --N;
    }

    if (b == true)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}