#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,c,n;
    t = c = n = 0;
    cin >> t;
    string s;
    getchar();

    while(t--)
    {
        cin >>s;
        c=0,n=s.size();

        for(int i=0; i<n; i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                c = c + (n-i)*(i+1);
//                cout<<ans<<endl;
            }
        }
        cout << c << "\n";
    }

    return 0;

}
