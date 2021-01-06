/**
Vowel Recognition
Link : https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/practice-problems/algorithm/vowel-game-f1a1047c/
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,c,n,c1,c2;
    i = j = k = l = c = n = c1 = c2 = 0;
    cin>>n;

    string s;
    getchar();

    for(l=1; l<=n; l++)
    {
        getline(cin,s);
        c1 = 0;
        c = 0;
        for(k=0; s[k] != '\0'; k++)
        {
            for(i=0; i<s.size(); i++)
            {
                for(j=0; j<i+1; j++)
                {
                    if(s[j]== 'a' || s[j]== 'e' || s[j]== 'i' || s[j]== 'o' || s[j]== 'u' || s[j]== 'A' || s[j]== 'E' || s[j]== 'I' || s[j]== 'O' || s[j]== 'U')
                    {
//                        cout<<1;
                        c++;
                    }
//                    cout<<s[j]<<" ";
                }
//                cout<<endl;
            }
            s[c1] = '0';
            c1++;
        }
        cout<<c<<endl;
    }
//    cout<<endl<<"Total vowel : "<<c;
//    cout<<c;


    return 0;
}

