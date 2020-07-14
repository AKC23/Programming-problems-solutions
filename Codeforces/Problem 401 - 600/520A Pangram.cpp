/**
520A Pangram
Problem Link : https://codeforces.com/problemset/problem/337/A
Submission's link : https://codeforces.com/contest/520/submission/86805355

Date : Tuesday, July 14,2020
@AKC
*/

#include<bits/stdc++.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    int n,i,c;
    n = i = c = 0;                                                  /** c = counting variable */
    string s1;

    cin>>n;
    getchar();
    getline(cin,s1);

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);         /** transform all characters to lowercase  */
    sort(s1.begin(), s1.end());                                     /** sorting : ascending order */

    if(n<26)
    {
        cout<<"NO";
        return 0;
    }
    else if(n>=26)
    {
        for(i=0;i<s1.size();i++)
        {
            if(s1[i] != s1[i+1])
            {
                c++;                                                /** Counting the unique characters */
            }
        }
    }

    if(c==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;

}





/**

Sample Input and output :

26
abcdefghIjklMnopqrstuvwxyz

27
abcdefghIjklMnopqrrstuvwxyz

35
TeQuickBrownFoxJumpsOverTheLayDog

*/
