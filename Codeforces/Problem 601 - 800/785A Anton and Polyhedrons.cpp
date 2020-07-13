/**
785A Anton and Polyhedrons
Links : https://codeforces.com/problemset/problem/785/A

Date : Wednesday, July 08,2020
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long int n,i,c;
    n = i = c = 0;
    cin>>n;
    getchar();

    for(i=1; i<=n; i++)
    {
        getline(cin,s);

        if(s == "Tetrahedron")
        {
            c = c + 4;
        }
        else if(s == "Cube")
        {
            c = c + 6;
        }
        else if(s == "Octahedron")
        {
            c = c + 8;
        }
        else if(s == "Dodecahedron")
        {
            c = c + 12;
        }
        else if(s == "Icosahedron")
        {
            c = c + 20;
        }

    }

    cout<<c;

    return 0;
}

