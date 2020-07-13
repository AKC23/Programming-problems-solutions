/**
Learnt about strings
*/

#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    string a;
    string b;
    string c;

    getline(cin,a);
    getline(cin,b);

    c = a + b;

    int len1 = a.size();
    int len2 = b.size();

    c[0] = a[0];
    a[0] = b[0];
    b[0] = c[0];
    cout<<len1<<" "<<len2<<endl<<c<<endl<<a<<" "<<b;

    return 0;
}
